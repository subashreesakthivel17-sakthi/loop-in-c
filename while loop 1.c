
#include <stdio.h>

int main()
{
    int n;
    int i=0;
    int noise;
    int count=0;
    int violation=0,long_violation=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&noise);
        if(noise>70){
        count++;
        noise++;
        
    }
    if(noise<70){
        noise=long_violation;
        long_violation++;
        
    }
        i++;
}
    printf("Noise Violations:%d\n",count);
    printf("Longest Violation Streak:%d",long_violation);
    return 0;
}