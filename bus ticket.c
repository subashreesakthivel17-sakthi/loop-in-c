
#include <stdio.h>

int main()
{
   int n,ticket;
   int totalcollection=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&ticket);
       totalcollection+=ticket;
    
    
   }
   printf("TotalCollection:$%d",totalcollection);
  
   
    return 0;
}