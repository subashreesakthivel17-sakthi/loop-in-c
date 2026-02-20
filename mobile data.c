
#include <stdio.h>

int main()
{
  int totaldata;
  int n;
  scanf("%d",&totaldata);
  scanf("%d",&n);
  int usage[n];
  for(int i=0;i<n;i++){
      scanf("%d",&usage[i]);
  }
  int succesful=0;
  for(int i=0;i<n;i++){
      if(usage[i]<=totaldata){
          totaldata-=usage[i];
          succesful++;
      }else{
          break;
      }
  }
  printf("Remainig Data:%d\n",totaldata);
  printf("Succesful Days:%d",succesful);
 
    return 0;
}
  
  

