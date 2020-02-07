#include <iostream>
class Demo {
  static const int size = 10;
  int arr[size];
  const int x;
  static int v;   // non const not allowed
 public:
  inline Demo(int i = 0) : x(i) {
    v = 100;
    for(int i = 0; i < size; i++) {
      arr[i] = 0;
    }
  }
  static void sfun() {
    std::cout << "Static Member: " << v << std::endl;
  }
  void print() {
    for(int i = 0; i < size; i++) {
      std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    sfun();
  }
};
int Demo::v;

int main() {
  Demo d(40); 
  d.print();
}
