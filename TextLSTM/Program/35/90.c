int main () {
    int a [10] [10], e [1000], f [1000], k [1000];
    int i, j, n, m, t = 0, x = 0;
    for (i = 0; i < 10; i++)
        k[i] = 0;
    scanf ("%d,%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] > k[t]) {
                k[t] = a[i][j];
                e[t] = i;
                f[t] = j;
            }
        }
        t++;
    }
    for (j = 0; j < m; j++) {
        for (t = 0; t < 10; t++) {
            if (f[t] == j)
                break;
        }
        for (i = 0; i < n; i++) {
            if (a[e[t]][f[t]] > a[i][j])
                break;
            if (i == n - 1) {
                printf ("%d+%d", e[t], f[t]);
                x++;
            }
        }
        if (x == 1)
            break;
    }
    if (x == 0)
        printf ("No");
    return 0;
}

