/* Create an enum called Hue containing red, blue, and yellow.
 Now create a class called Color containing a data member of type Hue and a constructor that sets the Hue from its argument. 
 Add access functions to “get” and “set” the Hue. Make all of the functions inlines.
*/
#include <iostream>

enum Hue{
  red,blue,yellow 
};
class Color {
  Hue h;

 public:
  Color(Hue h) : h(h) {
  }
  inline Hue getHue() const;
  inline void setHue(Hue);
};
Hue Color::getHue() const{  
  return h;
}
void Color::setHue(Hue h) {
  this->h = h;
}
int main() {
  Color c(red);
  std::cout << "Current Hue " << c.getHue() << std::endl;
  c.setHue(yellow);
  std::cout << "New Hue " << c.getHue() << std::endl;
}
