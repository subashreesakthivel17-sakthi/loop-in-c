
#include <stdio.h>

int main()
{
   int n,error;
   int  totalerror=0,critical=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&error);
        totalerror+=error;
        if(error>50){
          critical++;
        }
   }
        printf("Total Error:%d\n",totalerror);
        printf("Critical Hours:%d",critical);

    return 0;
}