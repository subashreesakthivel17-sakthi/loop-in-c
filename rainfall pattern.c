
#include <stdio.h>

int main()
{
   int n,rainfall;
   int totalrainfall=0,heavyday=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&rainfall);
       totalrainfall+=rainfall;
   
        if(rainfall>50){
            heavyday++;
     }
   }
   printf("Total Rainfall:%d\n",totalrainfall);
   printf("Heavy Rain Days:%d",heavyday);

    return 0;
}