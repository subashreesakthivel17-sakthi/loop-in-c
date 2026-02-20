
#include <stdio.h>

int main()
{
  int n;
  int hour;
  int call=0,over=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&hour);
    call+=hour;
  
  if(hour>40){
      over++;
  }
  }
  printf("Total Calls:%d\n",call);
  printf("Overloaded Hours:%d",over);
  return 0;
}
  
  
