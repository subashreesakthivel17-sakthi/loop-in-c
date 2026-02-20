
#include <stdio.h>

int main()
{
  int n;
  int scores;
  int risk=0,high_risk=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&scores);
    risk+=scores;
  }
  if(scores>50){
      high_risk++;
  }
  printf("Total Risk:%d\n",risk);
  printf("High Risk Session:%d",high_risk);
  return 0;
}
  
  
