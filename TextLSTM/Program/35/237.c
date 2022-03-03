int main () {
    int n, m, i, j, k, sz [10] [10], max [10], min [10], q [10] [10];
    scanf ("%d,%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            max[i] = sz[i][0];
            if (sz[i][j] > max[i])
                max[i] = sz[i][j];
            q[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            min[i] = sz[0][i];
            if (sz[j][i] < min[i])
                min[i] = sz[j][i];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (max[i] == sz[i][j])
                q[i][j]++;
            if (min[j] == sz[i][j])
                q[i][j]++;
        }
    }
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (q[i][j] == 2) {
                printf ("%d+%d\n", j, i);
                k++;
            }
        }
    }
    if (k == 0)
        printf ("No");
    return 0;
}

