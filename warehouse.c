
#include <stdio.h>

int main()
{
  int capacity;
  int n;
  scanf("%d",&capacity);
  scanf("%d",&n);
  int received[n];
  for(int i=0;i<n;i++){
      scanf("%d",&received[i]);
  }
  int rem_capacity=0;
  int overflow=0;
  for(int i=0;i<n;i++){
      if(rem_capacity+=received[i]){
         if(rem_capacity>capacity){
             overflow++;
             rem_capacity=capacity;
         }
          
      }
          
     
  }
  printf("Remainig Capacity:%d\n",rem_capacity);
  printf("Overflow Days:%d",overflow);
 
    return 0;
}
  
  

