// C08: ex05.cpp
// Create a const whose value is determined at runtime by reading the time when the program starts (you’ll have to use the <ctime> standard header). 
// Later in the program, try to read a second value of the time into your const and see what happens.

#include <ctime>
#include <iostream>
extern const char* val;
int main() { 
  time_t tt;
  struct tm *ti;
  
  time (&tt);
  ti = localtime(&tt);
  const char *val = asctime(ti);
  std::cout << "Current day, date, and time is = "
    << val;
  
  for(int i = 0, j = 0; i < 1000000000; i++) j++;
  time (&tt);
  ti = localtime(&tt);
  const char* secondtime = asctime(ti);
  std::cout << "Current day, date, and time is = "
    << secondtime;
  
  for(int i = 0, j = 0; i < 1000000000; i++) j++;
  time (&tt);
  ti = localtime(&tt);
  char* notaconst = asctime(ti);
  std::cout << "Current day, date, and time is = "
           << notaconst;
 return 0;
}
/* 
Current day, date, and time is = Tue Dec 24 17:26:13 2019
Current day, date, and time is = Tue Dec 24 17:26:15 2019
Current day, date, and time is = Tue Dec 24 17:26:17 2019
*/
