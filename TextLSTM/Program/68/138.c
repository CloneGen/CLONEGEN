void main () {
    int a = 0, b = 0, c = 0, d = 0, i = 0, j = 0, k = 0, n;
    scanf ("%d", &n);
    for (i = 6; i <= n; i += 2) {
        printf ("%d=", i);
        for (a = 3; a <= n / 2; a += 2) {
            c = 0;
            d = 0;
            b = i - a;
            for (j = 3; j <= sqrt (a); j += 2) {
                if (a % j != 0)
                    c++;
                d++;
            }
            if (c == d) {
                c = 0;
                d = 0;
                for (j = 3; j <= sqrt (b); j += 2) {
                    if (b % j != 0)
                        c++;
                    d++;
                }
                if (c == d) {
                    printf ("%d+%d\n", a, b);
                    break;
                }
            }
        }
    }
}

