void main () {
    int x, k, n, i, j, a;
    scanf ("%d", &a);
    for (x = 6; x <= a; x += 2) {
        k = 3;
        do {
            i = 3;
            for (n = k; i <= sqrt (n);) {
                for (i = 3; i <= sqrt (n); i += 2) {
                    if (n % i == 0)
                        break;
                }
                if (i <= sqrt (n))
                    n = n + 2;
            }
            for (j = 3; j <= sqrt (x - n); j += 2) {
                if ((x - n) % j == 0)
                    break;
            }
            k = n + 2;
        }
        while (j <= sqrt (x - n));
        printf ("%d=%d+%d\n", x, n, x - n);
    }
}

