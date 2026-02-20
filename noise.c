/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int n;
  int noise;
  int max_noise=0,period=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      scanf("%d",&noise);
      if(i==0){
          max_noise=noise;
      }
      if(noise>max_noise){
          max_noise=noise;
      }
      if(noise>70){
          period++;
      }
  }
      printf("Maximum Noise:%d\n",max_noise);
      printf("Noisy Periods:%d",period);
  

    return 0;
}