void main () {
    int (*a) [120], i, j, k, n, m;
    scanf ("%d %d", &n, &m);
    a = (int (*) [120]) malloc (200 * sizeof (int));
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf ("%d", *(a + i) + j);
        }
    }
    for (k = 0; k <= n + m - 2; k++) {
        for (i = 0; (i <= k) && (i < n); i++) {
            j = k - i;
            if (j < m)
                printf ("%d\n", *(*(a + i) + j));
        }
    }
}

