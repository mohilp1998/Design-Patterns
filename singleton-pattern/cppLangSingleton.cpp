#include <thread>
#include <mutex>
#include <string>
#include <iostream>

class Singleton
{
  public:
    static Singleton& GetInstance(const std::string value)
    {
      static Singleton instance(value); // Instantiated on first use. Compiler ensures that
      return instance;
    }
  
  private:
    std::string value_;
    Singleton(const std::string value): value_(value)
    {

    }
  
  public:
    // Deleting these from public as this helps get better error messages

    Singleton(Singleton const&) = delete;  // delete default cloning
    void operator=(Singleton const&) = delete; // cannot assign to new Singleton

    std::string value() const{
        return value_;
    }
};

void ThreadA()
{
  Singleton & inst1 = Singleton::GetInstance("A");
  std::cout << "ThreadA: " << inst1.value() << "\n";
}

void ThreadB()
{
  Singleton & inst2 = Singleton::GetInstance("B");
  std::cout << "ThreadB: " << inst2.value() << "\n";
}

int main()
{
  std::cout << "We should get the same values from both ThreadA and ThreadB\n";
  
  std::thread t1(ThreadA);
  std::thread t2(ThreadB);

  t1.join();
  t2.join();
  
  return 0;
}