
#include <stdio.h>

int main()
{
  int n;
  int values;
  int max_rate=0,danger=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&values);
    if(values>max_rate){
    max_rate=values;
    }
  if(values>140){
      danger++;
  }
  }
  
  printf("Max Heart Rate:%d\n",max_rate);
  printf("Danger Readings:%d",danger);
  return 0;
}
  
  
