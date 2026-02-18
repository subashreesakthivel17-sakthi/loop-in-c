#include <stdio.h>

int main()
{
   int  battery,n,perhour;
  
   scanf("%d\n%d",&battery,&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&perhour);
       battery-=perhour;
       
       if(battery<0){
           battery=0;
           break;
       }
    
   }
   printf("Remaining Battery:%d",battery);
   printf("%");
   
    return 0;
}