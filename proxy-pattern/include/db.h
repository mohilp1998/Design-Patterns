#include <vector>
#include <string>
#include <utility>
#include <iostream>

class DataStore
{
  public:
    int dataIdx[200];
    std::string dataContent[200];
    int curr_idx;

    DataStore();
    std::string read(int idx);
    void write(int idx, std::string content);
};