#include <iostream>
void exit();
class My {
 public:
  My() {
    std::cout << "DDDDD" << std::endl;
  }
  ~My() {
    std::cout << "sssssssss" << std::endl;
    exit();
  }
};
My e;
int main() {

}
