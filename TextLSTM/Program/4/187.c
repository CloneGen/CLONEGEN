int main () {
    int n, m, i, j, a [100] [100];
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf ("%d", &a[i][j]);
    for (i = 2; i <= n + m; i++)
        for (j = max (1, i - m); j <= min (n, i - 1); j++)
            printf ("%d\n", a[j][i - j]);
}

