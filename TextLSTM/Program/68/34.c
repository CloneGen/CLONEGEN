main () {
    long a, b, i, j, n, x, k, t;
    scanf ("%ld", &n);
    i = 6;
    while (i <= n) {
        k = 2;
        b = 1;
        x = 1;
        while (k <= (i / 2)) {
            j = 2;
            b = 1;
            a = sqrt (k);
            while (j <= a) {
                x = (k % j != 0);
                b = b && x;
                j++;
            }
            if (b == 1) {
                j = 2;
                b = 1;
                a = sqrt (i - k);
                while (j <= a) {
                    x = ((i - k) % j != 0);
                    b = b && x;
                    j++;
                }
                if (b == 1)
                    printf ("%d=%d+%d\n", i, k, i - k);
            }
            k++;
            if (b == 1)
                break;
        }
        i = i + 2;
    }
}

