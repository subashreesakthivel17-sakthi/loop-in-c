#include <stdio.h>

int main() {
    int fuel, n;
    scanf("%d", &fuel);
    scanf("%d", &n);

    int i = 1, burn;
    int stage = 0, wasted = 0;

    while(i <= n) {
        scanf("%d", &burn);
        fuel = fuel - burn;

        if(fuel < 0) {
            stage = i;
            wasted = -fuel;
            break;
        }
        i++;
    }

    if(stage > 0) {
        printf("Emergency Stage: %d\n", stage);
        printf("Fuel Wasted: %d", wasted);
    }

    return 0;
}