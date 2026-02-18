#include <stdio.h>

int main()
{
   int  n,amount;
   int approved=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
      scanf("%d",&amount);
      approved+=amount;
   }
       if(approved<=10000){
          printf("Approved");
       }
       else{
           printf("Limt Exceeded");
       }

    

   
    return 0;
}