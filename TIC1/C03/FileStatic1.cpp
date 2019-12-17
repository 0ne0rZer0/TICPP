//: C03:FileStatic1.cpp
// File Linking scope of static demonstration
// FileStatic1.cpp and FileStatic2.cpp are linked together which should cause error because of static scope
static int fs;
int main() {
  fs = 1;
}///:~
