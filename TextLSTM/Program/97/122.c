main () {
    int i, n, m, j, k;
    int A [100];
    int P1 = 0, P2 = 0, P3 = 0, P4 = 0, P5 = 0, P6 = 0;
    scanf ("%d", &n);
    P1 = n / 100;
    n = n - (P1 *100);
    P2 = n / 50;
    n = n - (P2 *50);
    P3 = n / 20;
    n = n - (P3 *20);
    P4 = n / 10;
    n = n - 10 * P4;
    P5 = n / 5;
    n = n - 5 * P5;
    P6 = n;
    printf ("%d\n%d\n%d\n%d\n%d\n%d", P1, P2, P3, P4, P5, P6);
    return 0;
}

