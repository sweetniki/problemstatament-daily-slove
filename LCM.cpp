#include <iostream>

using namespace std;

int main()
{
    int n1,n2,lcm;
    cout<<"enter two number";
    cin>>n1>>n2;
    while(n1!=n2){
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    cout<<"Hcf of number  "<<n1<<endl;
    int t=n1;
    lcm=(n1*n2)/t;
    cout<<"Lcm of number  "<<lcm;

    return 0;
}

