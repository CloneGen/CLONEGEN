int main () {
    int a, sum100, sum10, sum1, n100, n50, n20, n10, n5, n1;
    scanf ("%d", &a);
    if (a >= 100) {
        sum1 = a % 10;
        sum10 = a / 10 % 10;
        sum100 = a / 100;
        n100 = sum100;
        if (sum10 <= 1) {
            n10 = sum10;
            n20 = 0;
            n50 = 0;
        }
        else if (sum10 >= 2 && sum10 < 5) {
            n20 = sum10 / 2;
            n10 = sum10 - 2 * n20;
            n50 = 0;
        }
        else {
            n50 = 1;
            n20 = (sum10 - 5) / 2;
            n10 = sum10 - 5 - 2 * n20;
        }
        if (sum1 < 5) {
            n1 = sum1;
            n5 = 0;
        }
        else {
            n5 = 1;
            n1 = sum1 - 5;
        }
    }
    if (a >= 10 && a < 100) {
        sum10 = a / 10;
        sum1 = a % 10;
        n100 = 0;
        if (sum10 <= 1) {
            n10 = sum10;
            n20 = 0;
            n50 = 0;
        }
        else if (sum10 >= 2 && sum10 < 5) {
            n20 = sum10 / 2;
            n10 = sum10 - 2 * n20;
            n50 = 0;
        }
        else {
            n50 = 1;
            n20 = (sum10 - 5) / 2;
            n10 = sum10 - 5 - 2 * n20;
        }
        if (sum1 < 5) {
            n1 = sum1;
            n5 = 0;
        }
        else {
            n5 = 1;
            n1 = sum1 - 5;
        }
    }
    if (a >= 0 && a < 10) {
        sum1 = a;
        n100 = 0;
        n50 = 0;
        n20 = 0;
        n10 = 0;
        if (sum1 < 5) {
            n1 = sum1;
            n5 = 0;
        }
        else {
            n5 = 1;
            n1 = sum1 - 5;
        }
    }
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", n100, n50, n20, n10, n5, n1);
    return 0;
}

