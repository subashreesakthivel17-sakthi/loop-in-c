#include <stdio.h>

int main() {
    int a=1,b=2,c=3;
    printf("%d %d %d\n",a,b,c);
    int temp =a;
    a=b;
    a=c;
    c=temp;
    printf("%d %d %d",a,b,c);

    return 0;
}