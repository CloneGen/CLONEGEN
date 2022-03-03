main () {
    int m, n, i, t, p, f, k, q, c, add;
    int str [300];
    for (;;) {
        scanf ("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;
        for (i = 0; i < n; i++)
            str[i] = 1;
        i = -1;
        for (t = 1; t < n; t++) {
            add = m;
            k = 0;
            for (p = i + 1;; p++) {
                k = k + 1;
                if (p >= n) {
                    p = p - n;
                }
                if (str[p] == 0) {
                    add = add + 1;
                }
                if (k >= add)
                    break;
            }
            i = i + add;
            if (i > n - 1)
                i = i % n;
            str[i] = 0;
        }
        for (f = 0; f <= n - 1; f++) {
            if (str[f] == 1)
                printf ("%d\n", f + 1);
        }
    }
}

