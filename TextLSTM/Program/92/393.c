main () {
    int n;
    while (1) {
        int a [1005], b [1005], i, j, ua [1005] = {0}, ub [1005] = {0};
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            scanf ("%d", &b[i]);
        for (i = 1; i <= n; i++)
            scanf ("%d", &a[i]);
        for (i = 1; i < n; i++)
            for (j = i + 1; j <= n; j++)
                if (a[i] > a[j]) {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
        for (i = 1; i < n; i++)
            for (j = i + 1; j <= n; j++)
                if (b[i] > b[j]) {
                    int t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                }
        int win = 0, draw = 0;
        for (i = 1; i <= n; i++)
            for (j = n; j >= 1; j--)
                if (b[i] > a[j] && !ub[i] && !ua[j]) {
                    win += 1;
                    ub[i] = 1;
                    ua[j] = 1;
                }
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (a[i] == b[j] && !ua[i] && !ub[j]) {
                    draw += 1;
                    ua[i] = 1;
                    ub[j] = 1;
                }
        int ans = (win - (n - win - draw)) * 200;
        printf ("%d\n", ans);
    }
}

