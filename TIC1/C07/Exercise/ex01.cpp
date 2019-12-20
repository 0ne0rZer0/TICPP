// C07:ex01.cpp
// Text class with two constructos and a member function to store text files data
#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::endl;
using std::ifstream;
using std::ios;
class Text {
  string data;
  ifstream in;
  void storeData();
 public:
  Text();
  Text(string fileName);
  ~Text();
  string contents();
};
Text::Text() {
  data = "";
}
Text::Text(string fileName) {
  in.open("ex01.cpp",ios::in);
  data = "";
}
void Text::storeData() {
  string line;
  while(getline(in,line)) {
    data += line + "\n";
  }
}
Text::~Text() {
  if(in.is_open()) {
    in.close();
   // delete &in;
   // delete &data;
  } 
}
string Text::contents() {
  storeData();
  return data;
}
int main() {
  Text txt("ex01.cpp");
  std::cout << txt.contents();
}
