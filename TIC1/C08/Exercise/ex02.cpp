//:C08: ex02.c
// In C it gives and error initializer element is not constant
// C needs #define to believe things are constant
const int i = 5;
const int add = i+i;
int main() {
   return 0; 
}
