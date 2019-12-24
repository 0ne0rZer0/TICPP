// C08:Volatile.cpp
// The volatile keywords
class Comm {
  const volatile unsigned char byte;    // Can be changed by only outside agency and not client programmer
  volatile unsigned char flag;        // By environment and clien programmer
  enum { bufsize = 100 };             // Takes no memory
  unsigned char buf[bufsize];         
  int index;
 public:
  Comm();
  void isr() volatile;
  char read(int index) const;
};
Comm::Comm() : index(0), byte(0), flag(0) {}

// Only a demo wont actually work as an ISR
void Comm::isr() volatile {
  flag = 0;
  buf[index++] = byte;
  if(index >= bufsize) index = 0;
}

char Comm::read(int index) const {
  if(index < 0 || index >= bufsize)
    return 0;
  return buf[index];
}

int main() {
  volatile Comm Port;
  Port.isr();
//!  Port.read(0);   // Read should be volatile // Passing 'volatile Comm' as this discards argument qualifiers 
}
