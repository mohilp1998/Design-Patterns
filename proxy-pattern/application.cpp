#include "include/dbproxy.h"
#include <random>

int main()
{
  DataStore *my_files = new DataStore();
  Dbproxy proxy = Dbproxy(my_files);

  // fill up the DataStore
  for (int i=0; i<100; i++)
  {
    proxy.write(i, std::to_string(i));
  }

  // Reading random data
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist6(0,99); // distribution in range [1, 99]
  
  for(int i=0; i<30; i++)
  {
    int idx = dist6(rng);
    std::cout << "Index: " << idx << "; Content: " << proxy.read(idx) << "\n";
  }

  return 0;
}