

#include <stdio.h>

int main()
{
 int max,n;
 scanf("%d",&max,&n);
  int total=0;
  int count=0;
  int i=0;
 while(i<n){
     int weight;
     scanf("%d",&weight);
     total +=weight;
    if(total>max) {
        break;
    }
     count++;
     i++;
 }
 printf("Passengers Allowed:%d\n",count);
  if(total>max){
      printf("Overloaded status Yes\n");
  }
  else{
      printf("Overloaded status No\n");
  }
  return 0;
}