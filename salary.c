#include <stdio.h>

int main()
{
   int  salary,absent,i;
  
   scanf("%d\n %d",&salary,&absent);
   for(int i=1;i<=absent;i++)
   {
      salary=salary-100;
    
   }
   printf("FinalSalary:%d",salary);

   
    return 0;
}