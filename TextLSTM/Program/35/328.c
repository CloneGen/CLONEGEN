void main () {
    int a [10] [10], i, j, k, m, n, s = 0, max, min, weizhi;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0; i < m; i++) {
        max = a[i][0];
        weizhi = 0;
        for (j = 1; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                weizhi = j;
            }
        }
        min = a[0][weizhi];
        for (k = 1; k != i && k < m; k++) {
            if (a[k][weizhi] < a[i][weizhi])
                break;
        }
        if (k == m) {
            printf ("%d+%d", i, weizhi);
            s++;
        }
        if (s == 1)
            break;
    }
    if (i == m)
        printf ("No");
}

