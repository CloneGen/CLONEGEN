void main () {
    int n, i, a, b, j, k, r1, r2;
    scanf ("%d", &n);
    if (n <= 4)
        printf ("empty");
    else {
        for (i = 2; i <= n - 2; i++) {
            for (j = 2; j <= i - 1; j++) {
                if (i % j == 0) {
                    r1 = 0;
                    break;
                }
                else
                    r1 = 1;
            }
            for (k = 2; k <= i + 1; k++) {
                if ((i + 2) % k == 0) {
                    r2 = 0;
                    break;
                }
                else
                    r2 = 1;
            }
            if (r1 == 1 && r2 == 1) {
                a = i;
                b = i + 2;
                printf ("%d %d\n", a, b);
            }
            else
                continue;
        }
    }
}

