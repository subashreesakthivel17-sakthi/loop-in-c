
#include <stdio.h>

int main()
{
   int n,mark;
   int  sum=0,failed=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&mark);
        sum+=mark;
        
        if(mark<40)
        {
            failed++;
        }
 }
 
  float average=(float)sum/n;
   
   
   
   printf("Average Score:%.0f\n",average);
   printf("Failed Subject:%d",failed);

    return 0;
}