/******************************************************************************

                            Online C Compiler.


#include <stdio.h>

int main()
{
    int n;
    int overtime;
    int hour=0,cost,day=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&overtime);
        hour+=overtime;
        cost=hour*200;
        if(overtime>3)
        day++;
        
    }
    printf("Total Overtime Hours:%d\n",hour);
    printf("Overtime Cost:%d\n",cost);
    printf("Heavy Overtime Days:%d",day);
    

    return 0;
}