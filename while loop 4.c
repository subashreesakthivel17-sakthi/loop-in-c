

#include <stdio.h>

int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
 int i=0;
 
 while(i<n){
     scanf("%d",&arr[i]);
     i++;
 }
 int count=0,max=0;
 i=0;
 while(i<n){
     if(arr[i]==0){
         count++;
         if(count>max)
         max=count;
     }
             else{
                 count=0;
             }
         
         i++;
     }
    printf("%d",max);

    return 0;
}