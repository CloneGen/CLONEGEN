void main () {
    int d1, d2, sum = 0, n, a [100] [100], i, j, x1, y1, x2, y2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                x1 = i;
                y1 = j;
                break;
            }
        }
        if (j < n)
            break;
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            if (a[i][j] == 0) {
                x2 = i;
                y2 = j;
                break;
            }
        }
        if (j >= 0)
            break;
    }
    d1 = x2 - x1 + 1;
    d2 = y2 - y1 + 1;
    sum = (d1 - 2) * (d2 - 2);
    printf ("%d", sum);
}

