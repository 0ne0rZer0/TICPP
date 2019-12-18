#include <iostream>
using namespace std;
class Hen {
  static int i = 1;
  static int x = 2;
 public:
  void display() {
    cout << " Hen " << i ; 
  }
  class Nest {
    static int j = 2;
   public:
    void display() {
      cout << " nest " << i << j << x;
    }
    class Egg {
      static int k = 3;
     public:
      void display() {
        cout << " Egg " << i << j << k; 
      }
    };
  };
};
int main() {
  Hen h;
  Hen::Nest n;
  Hen::Nest::Egg e;
  h.display();
  n.display();
  e.display();
}
