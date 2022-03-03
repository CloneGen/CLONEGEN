int main () {
    int a [100] [100], i = 0, j = 0, m, n;
    scanf ("%d%d", &m, &n);
    for (i = 0; i <= m + 1; i++) {
        for (j = 0; j <= n + 1; j++) {
            if (i == 0 || j == 0 || i == m + 1 || j == n + 1)
                a[i][j] = 0;
            else
                scanf ("%d", &a[i][j]);
        }
    }
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (a[i][j] >= a[i][j - 1] && a[i][j] >= a[i][j + 1] && a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j])
                printf ("%d %d\n", i - 1, j - 1);
        }
    }
    return 0;
}

