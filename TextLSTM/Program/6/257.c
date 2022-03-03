int main () {
    int k, m, n;
    scanf ("%d", &k);
    int a [100] [100] = {0};
    int *p, i1, i2, sum = 0;
    for (; k > 0; k--) {
        sum = 0;
        scanf ("%d%d", &m, &n);
        for (i1 = 0; i1 < m; i1++) {
            p = a[i1];
            for (i2 = 0; i2 < n; i2++) {
                scanf ("%d", p);
                sum = sum + *p;
                p++;
            }
        }
        for (i1 = 1; i1 < m - 1; i1++) {
            p = a[i1];
            p++;
            for (i2 = 1; i2 < n - 1; i2++) {
                sum = sum - *p;
                p++;
            }
        }
        printf ("%d\n", sum);
    }
}

