#include <thread>
#include <mutex>
#include <string>
#include <iostream>

class Singleton
{
  private:
    static Singleton * instance_;
    static std::mutex mutex_;
    std::string value_;

    Singleton(const std::string value): value_(value)
    {

    }
    ~Singleton() {};

  public:
    Singleton(Singleton &other) = delete; // delete default cloning
    void operator=(const Singleton &) = delete; // cannot assign to new Singleton

    static Singleton *GetInstance(const std::string& value);
    
    std::string value() const{
        return value_;
    }
};

// Static variables need to defined outside of the class definition
Singleton * Singleton::instance_{nullptr};
std::mutex Singleton::mutex_;

Singleton *Singleton::GetInstance(const std::string& value)
{
      std::lock_guard<std::mutex> lock(mutex_);
      if (instance_ == nullptr)
      {
        instance_ = new Singleton(value);
      }
      return instance_;
}

void ThreadA()
{
  Singleton *inst1 = Singleton::GetInstance("A");
  std::cout << "ThreadA: " << inst1->value() << "\n";
}

void ThreadB()
{
  Singleton *inst2 = Singleton::GetInstance("B");
  std::cout << "ThreadB: " << inst2->value() << "\n";
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