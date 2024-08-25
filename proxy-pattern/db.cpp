#include "include/db.h"

DataStore::DataStore()
{
  curr_idx = 0;
}

void DataStore::write(int idx, std::string content)
{
  dataIdx[curr_idx] = idx;
  dataContent[curr_idx] = content;
  curr_idx++;
}

std::string DataStore::read(int idx)
{
  for (int i=0; i<curr_idx; i++)
  {
    if (dataIdx[i] == idx)
      return dataContent[i];
  }

  return "";
}