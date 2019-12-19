// C06:Constructor.cpp
// Constructors & destructors
#include <iostream>
using namespace std;

class Tree {
  int height;
 public:
  Tree(int initialHeight); // Constructor
  ~Tree();                    // Destructor
  void grow(int years);
  void printSize();
};
Tree::Tree(int initialHeight) {
  height = initialHeight;
}
Tree::~Tree() {
  cout << "inside Tree Deconstructor" << endl;
  printSize();
}
void Tree::grow(int years) {
  height += years;
}
void Tree::printSize() {
  std::cout << "Tree height is " << height << endl;
}
int main() {
  cout << "Before opening brace" << endl;
  {
    Tree t(12);
    cout << " after Tree creation " << endl;
    t.printSize();
    t.grow(4);
    cout << " Befire closing brace " << endl;
    
  }
}
