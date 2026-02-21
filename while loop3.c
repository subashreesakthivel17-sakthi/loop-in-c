
#include <stdio.h>

int main()
{
    int totaldata;
    int n;
    int i=0;
    int usage;
    int data_lasted=0;
    int rem_data=0;
    scanf("%d",&totaldata);
    scanf("%d",&n);
    while(i<n &&totaldata>0){
        scanf("%d",&usage);
         if(totaldata>=usage){
             totaldata-=usage;
             data_lasted++;
         }
         else{
             totaldata=0;
             data_lasted++;
             break;
             
         }
    }
    
        i++;

    printf("Days Used:%d\n",data_lasted);
    printf("Remaining Data:%dGB",totaldata);
    return 0;
}