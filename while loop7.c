{
    int capacity;
    int N;
    
    scanf("%d", &capacity);
    scanf("%d", &N);

    int occupied = 0;
    int criticalCount = 0;
    int i = 0;

    while(i < N) {
        int change;
        scanf("%d", &change);

        occupied = occupied + change;

        if(occupied > 0.9 * capacity) {
            criticalCount++;
        }

        i++;
    }

    printf("%d\n", occupied);
    printf("%d\n", criticalCount);

    return 0;
}