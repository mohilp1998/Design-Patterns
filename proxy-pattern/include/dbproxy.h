#include "db.h"
#include <unordered_map>

class Dbproxy
{
  std::unordered_map<int, std::string> cache;
  int cache_max_size;
  DataStore *m_db;
  public:
    Dbproxy(DataStore *db);
    std::string read(int idx);
    void write(int idx, std::string content);
};