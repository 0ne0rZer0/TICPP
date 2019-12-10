//: C02:ex08.cpp
// Floating number vector storage
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main() {
  vector<float> v;
  for(float f = 0.25; f < 12.5 ; f += 1.25) {
    v.push_back(f);
  }
  for(int i = 0; i < v.size() ; i++) {
    cout << v[i] << " "; 
    v[i] = v[i] * v[i];
  }
  cout << endl;
  for(int i = 0; i < v.size() ; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;  
}
