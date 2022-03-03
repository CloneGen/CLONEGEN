main () {
    int n, m, i, j, k, l = 0;
    scanf ("%d", &n);
    n = n - 2;
    for (i = 2; i <= n; i++) {
        j = 0;
        for (m = 2; m < i; m++) {
            if (i % m == 0)
                j++;
        }
        if (j == 0) {
            k = i + 2;
            for (m = 2; m < k; m++) {
                if (k % m == 0)
                    j++;
            }
            if (j == 0) {
                printf ("%d %d\n", i, k);
                l++;
            }
        }
    }
    if (l == 0)
        printf ("empty");
}

