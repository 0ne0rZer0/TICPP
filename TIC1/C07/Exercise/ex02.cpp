//: C07:ex02.cpp
// Message class constructor that takes a single string with a default value, two members called print() one w concat and wout. 

#include <iostream>
using namespace std;

class Message {
  string data;
 public:
  Message(string dt = "default v");
  void print();
  void print(string con);
};

Message::Message(string dt) {
  data = dt;
}

void Message::print() { std::cout << data << endl;}

void Message::print(string con) { std::cout << data << " " << con << endl; }

int main() {
  Message m;
  Message m2("bro");
  m.print("concat karega me");
  m2.print();
}
