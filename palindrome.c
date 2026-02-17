*******************************************************************************/
#include<stdio.h>
int main(){
   int r,n,num,sum=0;
   scanf("%d",&num);
   n=num;
   while(n!=0){
       r=n%10;
       sum=(sum*10)+r;
       n=n/10;
   }
   if(sum==num){
       printf(" yes");
   }
   else{
       printf("no");
   }
   return 0;
}
