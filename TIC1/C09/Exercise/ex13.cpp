#include<iostream>
class TwoInline {
 public:
  void firstFunction() {
    secondFunction();
  }
  inline void secondFunction();
};
void TwoInline::secondFunction() {
  std::cout << "In second Function" << std::endl;
}
int main() {
  TwoInline twl;
  twl.firstFunction();
}
