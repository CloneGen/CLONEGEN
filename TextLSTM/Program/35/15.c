void main () {
    int m, n, a [9] [9], i, j, k, l, judge;
    scanf ("%d, %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++) {
        k = a[i][0];
        l = 0;
        judge = 1;
        for (j = 0; j < n - 1; j++) {
            if (a[i][j] < a[i][j + 1]) {
                k = a[i][j + 1];
                l = j + 1;
            }
        }
        for (j = 0; j < m; j++) {
            if (a[j][l] < a[i][l]) {
                judge = 0;
                break;
            }
        }
        if (judge == 1) {
            printf ("%d+%d", i, l);
            break;
        }
    }
    if (judge == 0)
        printf ("No");
}

