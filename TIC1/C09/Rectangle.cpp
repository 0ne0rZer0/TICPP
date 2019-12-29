//: C09:Rectangle.cpp
// Accessors & mutators

class Rectangle {
  int wide, high;
 public:
  Rectangle(int w = 0, int h = 0) : wide(w), high(h) {}
  int width() const { return wide; }  //  Read
  void width(int w) const { wide = w; } // Set
  int height() const { return height; } // Read
  void height(int h) const { height = h;} // Set
};
int main() {
  Rectangle r(19 ,47);
  r.height(2 * r.width());
  r.width(2 * r.height());
} ///:~
