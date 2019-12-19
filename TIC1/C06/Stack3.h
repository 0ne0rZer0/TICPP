// C06: Stack3.h
// With constructors/destructors
class Stack {
  struct Link {
    void* data;
    Link* next;
    Link(void* data,Link* next);
    ~Link();
  }* head;
 public:
    Stack();
    ~Stack();
    void push(void* element);
    void* pop();
    void* peek();
};
