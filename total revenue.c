
#include <stdio.h>
  int main(){
      int n;
      long revenue;
      long totalrevenue=0;
      int targetday=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
          scanf("%ld",&revenue);
          totalrevenue+=revenue;
          if(revenue>50000){
              targetday++;
          }
      }
      printf("Total Revenue:%ld\n",totalrevenue);
      printf("Target Days:%d\n",targetday);
      return 0;
  }