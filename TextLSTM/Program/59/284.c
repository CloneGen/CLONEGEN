main () {
    char k [100];
    int a [100] [100], i, j, l, n, d, t = 0;
    scanf ("%d", &n);
    k[0] = getchar ();
    for (i = 0; i < n; i++) {
        gets (k);
        for (j = 0; j < n; j++) {
            if (k[j] == '.')
                a[i][j] = 1;
            if (k[j] == '#')
                a[i][j] = 0;
            if (k[j] == '@')
                a[i][j] = 2;
        }
    }
    scanf ("%d", &d);
    for (l = 0; l < d; l++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (a[i][j] == 1) {
                    if (i > 0 && a[i - 1][j] >= 2 && a[i - 1][j] <= l + 1) {
                        a[i][j] = l + 2;
                        continue;
                    }
                    if (i < n - 1 && a[i + 1][j] >= 2 && a[i + 1][j] <= l + 1) {
                        a[i][j] = l + 2;
                        continue;
                    }
                    if (j > 0 && a[i][j - 1] >= 2 && a[i][j - 1] <= l + 1) {
                        a[i][j] = l + 2;
                        continue;
                    }
                    if (j < n - 1 && a[i][j + 1] >= 2 && a[i][j + 1] <= l + 1) {
                        a[i][j] = l + 2;
                        continue;
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] >= 2)
                t++;
    printf ("%d\n", t);
}

