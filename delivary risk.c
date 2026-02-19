
#include <stdio.h>
  int main(){
      int n;
      int minutes;
      int delay=0,delivary=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
          
        scanf("%d",&minutes);
         delay+=minutes;
      
          if(minutes>30){
              delivary++;
              
          }
      }
      
     printf("Total Delay:%d\n",delay);
     printf("Delayed Deliveries:%d",delivary);
     
      return 0;
  }