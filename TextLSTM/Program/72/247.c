main () {
    int a [25] [25], m, n;
    memset (a, 0, sizeof (a));
    scanf ("%d", &m);
    scanf ("%d", &n);
    for (int i = 1;
    i <= m; i++)
        for (int j = 1;
        j <= n; j++)
            scanf ("%d", &a[i][j]);
    for (int i = 1;
    i <= m; i++)
        for (int j = 1;
        j <= n; j++) {
            if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1])
                printf ("%d %d\n", i - 1, j - 1);
        }
}

