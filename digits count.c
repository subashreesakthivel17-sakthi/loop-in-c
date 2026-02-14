#include <stdio.h>

int main(){
    int i,sum=0,digit;
   scanf("%d",&i);
   for(;i!=0;i/=10){
       digit=i%10;
       sum+=digit;
   }
   printf("%d\n",sum);
   return 0;
}