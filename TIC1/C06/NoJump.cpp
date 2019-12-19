//: C06:NoJump.cpp
// Trying to jump past constructors
class X {
 public:
  X();
};
X::X() { }
void f(int i) {
  if(i < 10)
//!    goto jump1;
  X x1;
  jump1 : 
    switch(i) {
      case 1:
        X x3;
        break;
      case 2:
        X x2;
        break;
    }
}
int main() {
  X x;
  //f(9);
  return 0;
}
/*
 If you try using goto : 
 NoJump.cpp: In function ‘void f(int)’:
NoJump.cpp:12:3: error: jump to label ‘jump1’ [-fpermissive]
   jump1 :
   ^~~~~
NoJump.cpp:10:10: note:   from here
     goto jump1;
          ^~~~~
NoJump.cpp:11:5: note:   crosses initialization of ‘X x1’
   X x1;
     ^~
*/
/* 
If you try using switch :
NoJump.cpp: In function ‘void f(int)’:
NoJump.cpp:17:12: error: jump to case label [-fpermissive]
       case 2:
            ^
NoJump.cpp:15:11: note:   crosses initialization of ‘X x3’
         X x3;

*/
