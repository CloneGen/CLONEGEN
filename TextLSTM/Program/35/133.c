void main () {
    int a [8] [8], b [8], m, n, i, j, max, min, flag = 0, h;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    for (i = 0; i < m; i++) {
        max = a[i][0];
        for (j = 1; j < n; j++) {
            if (max < a[i][j])
                max = a[i][j];
        }
        b[i] = max;
    }
    for (j = 0; j < n; j++) {
        min = a[0][j];
        h = 0;
        for (i = 1; i < m; i++) {
            if (min > a[i][j]) {
                min = a[i][j];
                h = i;
            }
        }
        if (min == b[h]) {
            printf ("%d+%d", h, j);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf ("No");
}

