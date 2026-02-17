#include<stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   for(int i=2;i<=n;i++){
   if(n==2||n==3||n==5||n==7){
       printf("prime");
   }
   else{
       printf("non prime");
   }
 
   return 0;
}
}
