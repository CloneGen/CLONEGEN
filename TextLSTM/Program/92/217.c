main () {
    int n, i, j, a [1001], b [1001], t;
    while (1) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf ("%d", &a[i]);
        for (i = 1; i <= n; i++)
            scanf ("%d", &b[i]);
        for (i = 1; i < n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (a[i] > a[j]) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
        for (i = 1; i < n; i++) {
            for (j = i + 1; j <= n; j++) {
                if (b[i] > b[j]) {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
            }
        }
        int tie = 0, win = 0, s;
        j = 1;
        for (i = 1; i <= n; i++) {
            if (a[i] > b[j]) {
                ++j;
                ++win;
            }
            else if (a[i] > b[j - 1] && tie > 0) {
                --tie;
                ++win;
            }
            else if (a[i] == b[j]) {
                ++j;
                ++tie;
            }
        }
        s = win * 400 + tie * 200 - n * 200;
        printf ("%d\n", s);
    }
}

