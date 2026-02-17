#include<stdio.h>
#include<math.h>
int main(){
   int n,original,remainder,digit=0;
   int sum=0;
   scanf("%d",&n);
   original=n;
   for(int temp=n;temp !=0;temp =temp/10){
       digit++;
   }
   for(int temp=n;temp !=0;temp=temp/10){
       remainder =temp%10;
       sum += pow (remainder,digit);
   }
   if(sum ==original)
       printf("yes");
   
   else
       printf("no");
   
   return 0;
   
}
