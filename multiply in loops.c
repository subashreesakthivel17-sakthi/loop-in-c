#include <stdio.h>

int main() {
    int sum;
    for(int i=5;i<=50;i+=5)
    {
        sum*=i;
        printf("%d\n",i);
    }

    return 0;
}