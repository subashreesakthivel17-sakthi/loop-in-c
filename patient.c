
#include <stdio.h>

int main()
{
   int n,patient;
   int  totalpatient=0,overcrowed=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&patient);
        totalpatient+=patient;  
   
        if(patient>100){
          overcrowed++;
        }
   }
        printf("Total  patient:%d\n",totalpatient);
        printf("Overcrowed Days:%d",overcrowed);

    return 0;
}