main () {
    int h = 0, i, j, k, l, m, n, x, y, z [10000] = {0};
    scanf ("%d %d", &x, &y);
    for (k = x; k <= y; k++) {
        for (j = 2; j <= sqrt (k); j++)
            if (k % j == 0)
                break;
        if (j > sqrt (k)) {
            n = log10 (k) + 1;
            m = 0;
            l = k;
            for (i = 0; i <= n - 1; i++) {
                z[i] = l / pow (10, n - 1 - i);
                l = l - z[i] * pow (10, n - 1 - i);
            }
            for (i = 0; i <= n - 1; i++)
                if (z[i] == z[n - 1 - i])
                    m++;
            if (m == n) {
                if (h)
                    printf (",");
                printf ("%d", k);
                h++;
            }
        }
    }
    if (h == 0)
        printf ("no");
    printf ("\n");
}

