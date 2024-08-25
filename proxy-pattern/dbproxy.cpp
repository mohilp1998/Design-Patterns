#include "include/dbproxy.h"

Dbproxy::Dbproxy(DataStore *db)
{
  cache_max_size = 20;
  m_db = db;
}

std::string Dbproxy::read(int idx)
{
  if (cache.find(idx) !=  cache.end())
  {
    return cache[idx];
  }

  std::string content=m_db->read(idx);

  if (cache.size() == cache_max_size)
  {
    cache.erase(cache.begin());
    cache[idx] = content;
  }

  return content;
}

void Dbproxy::write(int idx, std::string content)
{
  if (cache.find(idx) !=  cache.end())
  {
    cache.erase(cache.find(idx));
  }

  return m_db->write(idx, content);
}