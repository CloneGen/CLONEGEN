void main () {
    int i, j, m, n, temp;
    int f [8] [8];
    int max [8], min [8];
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf ("%d", &f[i][j]);
    temp = m;
    for (i = 0; i < m; i++) {
        max[i] = f[i][0];
        temp = 0;
        for (j = 0; j < n; j++) {
            if (max[i] < f[i][j]) {
                temp = j;
                max[i] = f[i][j];
            }
        }
        max[i] = temp;
    }
    for (i = 0; i < n; i++) {
        min[i] = f[0][i];
        temp = 0;
        for (j = 0; j < m; j++) {
            if (min[i] > f[j][i]) {
                temp = j;
                min[i] = f[j][i];
            }
        }
        min[i] = temp;
    }
    for (i = 0; i < m; i++) {
        if (min[max[i]] == i) {
            printf ("%d+%d", i, max[i]);
            break;
        }
    }
    if (i == m)
        printf ("No");
}

