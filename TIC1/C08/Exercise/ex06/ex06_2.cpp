#include <iostream>
int main() {
  const char c[] = "Utkarsh Nagdev";
  char const e[] = "La la llaaa la"; 
  char* d = const_cast<char*>(c);
  char* f = const_cast<char*>(e);
  *(d) = 's';   // Works!
  *(f) = 's';   // Works!
  std::cout << c << std::endl;  
  std::cout << f << std::endl;  
  //! c[3] = '\0';    Read only location 
  return 0;  
} 
