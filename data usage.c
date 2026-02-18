
#include <stdio.h>

int main()
{
   int n,daily;
   int  totaldata=0,highusage=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&daily);
        totaldata+=daily;    
        if(daily>2){
         highusage++;
        
        
   }
   
   }
   
   printf("Total Data:%d\n",totaldata);
   printf("High Usage Days:%d",highusage);

    return 0;
}