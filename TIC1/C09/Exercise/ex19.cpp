#include <iostream>
#include <cstring>

#define FIELD(a) \
private: \
  std::string a##_string; int a##_size; \
public: \
  void a##_setStr(std::string c)    { a##_string = c; } \
  void a##_setSize(int i)     { a##_size = i; } \
  std::string a##_getStr()          { return a##_string; } \
  int a##_getSize()           { return a##_size; }

class MyClass {
  FIELD(one);
  FIELD(two);
};

int main() {
  MyClass m;
  m.one_setStr("Utk");
  m.one_setSize(13);

  m.two_setStr("Apy");
  m.two_setSize(11);

  std::cout << m.one_getStr() << " - " << m.one_getSize() << "\n" 
            << m.two_getStr() << " - " << m.two_getSize() << std::endl;
  return 0;
}
