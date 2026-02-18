
#include <stdio.h>

int main()
{
   int  day,n;
   int expense, total=0;
   int Overspenddays=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",& expense);
       total+=expense;
       if(expense>1000){
           Overspenddays++;
       }
   }
   printf("Total Expense:%d\n",total);
   printf("OverspendDays:%d\n",Overspenddays);


    return 0;
}