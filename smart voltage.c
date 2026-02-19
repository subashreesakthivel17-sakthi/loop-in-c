
#include <stdio.h>
  int main(){
      int n;
      int vol;
      int minimum,low_vol=0;
      scanf("%d",&n);
      for(int i=0;i<n;i++){
          scanf("%d",&vol);
         if(i==0){
             minimum=vol;
         }
         if(vol<minimum){
             minimum=vol;
         }
      
      if(vol<210){
          low_vol++;
      }
}
      printf("Minimum Voltage:%d\n",minimum);
      printf("Low Voltage Events:%d",low_vol);
      return 0;
  }