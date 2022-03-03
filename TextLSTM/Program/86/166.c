void main () {
    int n, m;
    int a [60], sum;
    int i, j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &m);
        for (j = 0; j < m; j++) {
            scanf ("%d", &a[j]);
        }
        sum = 0;
        if (m == 0)
            sum = 60;
        for (j = 0; j < m; j++) {
            if (a[j] + 3 * j >= 60) {
                sum = 60 - 3 * j;
                break;
            }
            else if (a[j] + 3 * (j + 1) >= 60) {
                sum = a[j];
                break;
            }
        }
        if (j == m)
            sum = 60 - 3 * m;
        printf ("%d\n", sum);
    }
}

