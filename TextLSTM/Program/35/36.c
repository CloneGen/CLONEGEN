void main () {
    int s [8] [8], p [8], q [8], i, j, m, n, k = 0;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &s[i][j]);
    }
    for (i = 0; i < m; i++) {
        p[i] = s[i][0];
        for (j = 0; j < n; j++) {
            if (p[i] < s[i][j])
                p[i] = s[i][j];
        }
    }
    for (j = 0; j < n; j++) {
        q[j] = s[0][j];
        for (i = 1; i < m; i++) {
            if (q[j] > s[i][j])
                q[j] = s[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (p[i] == q[j]) {
                printf ("%d+%d", i, j);
                k = 1;
            }
            else
                continue;
        }
    }
    if (k == 0)
        printf ("No");
}

