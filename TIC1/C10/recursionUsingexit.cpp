#include<iostream>
class X {
  public:
  ~X() {
    std::cout << "Before object construction" << std::endl;  
    static X x;    // if static  then calls destructor otherwise doesnt?  
    std::cout << "Destructor" << std::endl;  
    exit(0);    // When commented it is recursion
    std::cout << "Exit did not work?" << std::endl;
   }
};
void fun() {
  std::cout << "Start of function" << std::endl;
  X x;
  static X x2;
  std::cout << "End of funtion" << std::endl;
}
int main() {
  fun();
  std::cout << "Main continued" << std::endl;
}
/* my interpretation is that the object is only killed using deconstructor when it exits for it to go recursive every time the exit is finished an object should be created */
