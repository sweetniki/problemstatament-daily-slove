#include <iostream>
#include<math.h>

using namespace std; int convert(long num)
 {
     int i=0,decimale=0;
    while(num!=0)
  {
       int rem=num%10;
       num=num/10;
       int res=rem*pow(2,i);
       decimale=decimale+res;
       i++;
     
  }
  return decimale;
}

