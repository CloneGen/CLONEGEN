void main () {
    int a [8] [8], max [8], min [8], i, k = 0, j, m, n;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
        max[i] = a[i][0];
    for (i = 0; i < n; i++)
        min[i] = a[0][i];
    for (i = 0; i < m; i++) {
        for (j = 1; j < n; j++) {
            if (max[i] < a[i][j])
                max[i] = a[i][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 1; j < m; j++) {
            if (min[i] > a[j][i])
                min[i] = a[j][i];
        }
    }
    for (i = 0; i < m;) {
        for (j = 0; j < n; j++) {
            if (max[i] == min[j]) {
                printf ("%d+%d", i, j);
                k = 1;
            }
        }
        i++;
        if (i + j == m + n && k == 0)
            printf ("No");
    }
}

