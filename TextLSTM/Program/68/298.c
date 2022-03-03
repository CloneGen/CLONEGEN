void main () {
    int n, k, i, l, j, a, b;
    float r;
    scanf ("%d", &n);
    for (k = 6; k <= n; k = k + 2) {
        for (i = 3; i <= k; i = i + 2) {
            a = 0;
            b = 0;
            for (j = 3; j <= sqrt (i); j = j + 2) {
                r = i % j;
                if (r == 0)
                    a = 1;
            }
            if (a == 0) {
                l = k - i;
                for (j = 3; j <= sqrt (l); j = j + 2) {
                    r = l % j;
                    if (r == 0)
                        b = 1;
                }
                if (b == 0) {
                    printf ("%d=%d+%d\n", k, i, l);
                    break;
                }
                a = 0;
                b = 0;
            }
        }
    }
}

