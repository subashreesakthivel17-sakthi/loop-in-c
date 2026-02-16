#include<stdio.h>
int main(){
    int num,digit,count=0;
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    for(;num>0;num=num/10){
        digit=num%10;
        if(digit%2==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}