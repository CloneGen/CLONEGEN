main () {
    int n, i, k, t, m, p;
    scanf ("%d", &n);
    if (n <= 4)
        printf ("empty");
    else {
        for (i = 3; i <= n - 2; i++) {
            m = (int) sqrt (i) + 1;
            for (k = 2; k <= m; k++) {
                if (i % k == 0)
                    break;
            }
            if (k == m + 1) {
                p = (int) sqrt (i + 2) + 1;
                for (t = 2; t <= p; t++) {
                    if ((i + 2) % t == 0)
                        break;
                }
                if (t == p + 1)
                    printf ("%d %d\n", i, i + 2);
            }
        }
    }
}

