//: C08:Pointer Assignment.cpp

int d = 1;
const int e = 2;
const int* u = &d;              // Constant pointer to non const value
//! int *v = &e;                    // Non const pointer to const value therefore it can be changed hence error by compiler
// Invalid conversion from "const int*" to "int *"
int* w = (int*)&e;
int main() {}
