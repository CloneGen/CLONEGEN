void main () {
    int m, n, p = 0;
    scanf ("%d", &n);
    int i;
    while (n != 0) {
        printf ("%d", n % 10);
        n = n / 10;
    }
}

