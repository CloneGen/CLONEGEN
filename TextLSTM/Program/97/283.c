int main () {
    int n, a [6] = {0}, i;
    scanf ("%d", &n);
    if (n >= 100) {
        a[0] = n / 100;
        n = n % (100 * a[0]);
    }
    else
        a[0] = 0;
    if (n >= 50) {
        a[1] = n / 50;
        n = n % (50 * a[1]);
    }
    else
        a[1] = 0;
    if (n >= 20) {
        a[2] = n / 20;
        n = n % (a[2] * 20);
    }
    else
        a[2] = 0;
    if (n >= 10) {
        a[3] = n / 10;
        n = n % (a[3] * 10);
    }
    else
        a[3] = 0;
    if (n >= 5) {
        a[4] = n / 5;
        n = n % (a[4] * 5);
    }
    else
        a[4] = 0;
    a[5] = n;
    for (i = 0; i < 6; i++) {
        printf ("%d\n", a[i]);
    }
    return 0;
}

