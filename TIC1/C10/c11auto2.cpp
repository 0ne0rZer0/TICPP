#include <iostream>
#include <set>
using namespace std;
int main() {
  // Create a set of strings
  set<string> st;
  st.insert({"0ne0rZer0","for","Google"});
  for(auto it = st.begin(); it != st.end(); it++)
    cout << *it << " ";
  return 0;
}
