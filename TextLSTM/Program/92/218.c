main () {
    int n, i, j, a [1001], b [1001], t, f = 0;
    while (1) {
        f++;
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf ("%d", &a[i]);
        for (i = 1; i <= n; i++)
            scanf ("%d", &b[i]);
        for (i = 1; i < n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (a[i] < a[j]) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        for (i = 1; i < n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (b[i] < b[j]) {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }
        int x1, x2 = 0, y1, s1, s, k;
        for (k = n; k >= 1; k--) {
            x1 = 0, y1 = 0, x2 = 0;
            for (i = n - k + 1; i <= n; i++) {
                if (b[i] < a[i - n + k])
                    x1++;
                else if (b[i] == a[i - n + k])
                    y1++;
            }
            s1 = 400 * x1 + 200 * y1 - 200 * n;
            if (k == n)
                s = s1;
            else if (s1 > s)
                s = s1;
        }
        printf ("%d\n", s);
    }
}

