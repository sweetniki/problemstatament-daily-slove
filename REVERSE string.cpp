# problemstatament-daily-slove
daily one program
#include <iostream>

using namespace std;

int main()
{
    cout<<"enter the string";
    string str;
    //int i=0;
    cin>>str;
    string s="";
    int strlen=str.length();
    cout<<strlen<<endl;
    for(int i=strlen-1;i>=0;i--){
        s=s+str[i];
    }
    cout<<s;

    return 0;
}

