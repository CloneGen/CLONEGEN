int main () {
    int m, n, i, j, a [100] [100], b [100] = {0};
    scanf ("%d%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] >= a[i][j + 1] && a[i][j] >= a[i][j - 1] && a[i][j] >= a[i + 1][j] && a[i][j] >= a[i - 1][j]) {
                printf ("%d %d\n", i, j);
            }
        }
    }
    scanf ("%d", &i);
    return 0;
}

