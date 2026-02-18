#include <stdio.h>

int main()
{
   int n,loss;
   int totalloss=0,highlossdays=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&loss);
       totalloss+=loss;
   
        if(loss>100){
            highlossdays++;
     }
   }
   printf("Total Loss:%d\n",totalloss);
   printf("High Loss Days:%d",highlossdays);

    return 0;
}