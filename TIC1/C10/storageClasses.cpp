
// auto s = 10; // This works? C++11 introduces auto and decltype as datatype, compiler will automatically decide that which type it is

 auto int i = 10;    // auto means that it is local but its defined globally
// Error in cpp 03 : top level declaration of i specifies auto
// Error in cpp 11: two or more datatypes in declaration of 'i'
// Error in c: file scope declaration of 'i' specifies auto 
int main() {

  auto int i = 10;
  return 0;  
}
