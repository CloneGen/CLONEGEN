int main () {
    int sum;
    scanf ("%d", &sum);
    int i = 0;
    while (sum >= 100) {
        i++;
        sum = sum - 100;
    }
    printf ("%d\n", i);
    i = 0;
    while (sum >= 50) {
        i++;
        sum = sum - 50;
    }
    printf ("%d\n", i);
    i = 0;
    while (sum >= 20) {
        i++;
        sum = sum - 20;
    }
    printf ("%d\n", i);
    i = 0;
    while (sum >= 10) {
        i++;
        sum = sum - 10;
    }
    printf ("%d\n", i);
    i = 0;
    while (sum >= 5) {
        i++;
        sum = sum - 5;
    }
    printf ("%d\n", i);
    i = 0;
    while (sum >= 1) {
        i++;
        sum = sum - 1;
    }
    printf ("%d\n", i);
}

