void main () {
    int m, n, i, j, z = 0, x, y;
    char a [100];
    char b [100];
    scanf ("%s%s", a, b);
    m = strlen (a);
    n = strlen (b);
    if (m == n) {
        for (i = 0; i < m - 1; i++) {
            for (j = 0; j < m - i; j++) {
                if (a[j] > a[j + 1]) {
                    x = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = x;
                }
                if (b[j] > b[j + 1]) {
                    y = b[j + 1];
                    b[j + 1] = b[j];
                    b[j] = y;
                }
            }
        }
        for (i = 0; i < m; i++) {
            if (a[i] == b[i])
                z = z + 1;
        }
        if (z == m)
            printf ("YES");
        else
            printf ("NO");
    }
    if (m != n)
        printf ("NO");
}

