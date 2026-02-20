
#include <stdio.h>

int main()
{
  int n;
  int consumed;
  int unit=0,hour=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&consumed);
    unit+=consumed;
  
  if(consumed>5){
      hour++;
  }
  }
  printf("Total Units:%d\n",unit);
  printf("Spike Hours:%d",hour);
  return 0;
}
  
  
