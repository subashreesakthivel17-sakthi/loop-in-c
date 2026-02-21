
#include <stdio.h>

int main()
{
    int n;
    int i=0;
    int initialbalance;
    int transaction=0;
    int lowbalance=0;
    scanf("%d",&n);
    scanf("%d",&initialbalance);
    while(i<n){
        scanf("%d",&transaction);
        initialbalance=initialbalance+transaction;
        if(initialbalance>2000){
         lowbalance++;
    
        
    }
    
        i++;
}
    printf("Final Balance:%d\n",initialbalance);
    printf("Low Balance Days:%d",lowbalance);
    return 0;
}