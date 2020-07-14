# problemstatament-daily-slove
daily one program
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x=0,y=0;
    char c='R';
    int dis=10;
    
    while(n>0){
        switch(c){
     case 'R':
            x=x+dis;
            c='u';
            dis=dis+10;
            break;
    case 'u':
        y=y+dis;
        c ='L';
        dis=dis+10;
        break;
        
    case 'L':
       x=x-dis;
       c='T';
       dis=dis+10;
       break;
       
    case 'T':
        y=y-dis;
       c='A';
       dis=dis+10;
      break;
    
    case 'A':
      x=x+dis;
      c='R';
      dis=dis+10;
      break;
            
        }
      n--;
 }
    printf("%d  %d",x,y);


    return 0;
}
