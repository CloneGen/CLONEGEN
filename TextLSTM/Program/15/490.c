int main () {
    int a [100] [100], i, j, s, n, b [2], c [2], q = 0, p = 0;
    scanf ("%d", &n);
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 1; j++)
            scanf ("%d", &a[i][j]);
    }
    for (i = 0; i <= n - 1; i++) {
        s = 0;
        for (j = 0; j <= n - 1; j++) {
            if (a[i][j] == 0)
                s += 1;
        }
        if (s > 2) {
            b[p] = i;
            p += 1;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        s = 0;
        for (j = 0; j <= n - 1; j++) {
            if (a[j][i] == 0)
                s += 1;
        }
        if (s > 2) {
            c[q] = i;
            q += 1;
        }
    }
    printf ("%d", (b[1] - b[0] - 1) * (c[1] - c[0] - 1));
    return 0;
}

