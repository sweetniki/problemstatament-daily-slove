#include <iostream>

using namespace std;

int main()
{
    cout<<"number";
     int num;
     cin>>num;
     int count=0;
   for(int i=2;i<=num/2;i++)
        {
	         if(num%2==0)
	        	 count++;
	    }
            
             if(count==0) 
             {
	
	              cout<<"prime";
             }       
	           else
	           {
	        	    cout<<" NOT prime";
	           }
	         return 0;
}
