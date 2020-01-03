//:C10:MyLib.cpp
class X {
  // namespace S{ }  Error : unexpected qualified id before namespace
};
namespace MyLib {
  // Declarations  
}
int main() {
/*  namespace inMethod {
    
  }
Error: namespace definition not allowed here
*/
}
