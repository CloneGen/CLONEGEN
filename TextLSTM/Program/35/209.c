void main () {
    int a [100] [100], b [100], m, n, i, j, max;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i <= m - 1; i++) {
        max = 0;
        for (j = 0; j <= n - 1; j++) {
            scanf ("%d", &a[i][j]);
            if (a[i][j] > max) {
                b[i] = j;
                max = a[i][j];
            }
        }
    }
    for (i = 0; i <= m - 1; i++) {
        for (j = 0; j <= m - 1; j++)
            if (a[j][b[i]] < a[i][b[i]])
                break;
        if (j == m) {
            printf ("%d+%d", i, b[i]);
            break;
        }
    }
    if (i == m)
        printf ("No");
}

