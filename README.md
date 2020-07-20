# problemstatament-daily-slove
daily one program
#include <iostream>

using namespace std;
int findGCD(int, int);
int main()
{
    int n1,n2;
    cout<<"enter two number";
    cin>>n1;
    cout<<"enter second number";
    cin>>n2;
    cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<findGCD(n1,n2);
        return 0;
 }
  int findGCD(int n1,int n2)
{
            if(n1==0)
         {
           return n2;
         }
      if(n2==0)
      {
        return n1;
      }
      if(n1==n2)
      {
        return n1;
      }
    else if(n1>n2){
        return findGCD(n1-n2,n2);
    }
    return findGCD(n1,n2-n1);

}
