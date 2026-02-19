
#include <stdio.h>
  int main(){
      int cash;
      int n;
      int amount;
      int remain_cash,count=0;
      scanf("%d",&cash);
       scanf("%d",&n);
       remain_cash=cash;
      for(int i=0;i<n;i++){
         
          scanf("%d",&amount);
          remain_cash-=amount;
          if(remain_cash<5000){
              count++;
          }
         
}
      printf("Remaining Cash:%d\n",remain_cash);
      printf("Risk Count:%d",count);
      return 0;
  }