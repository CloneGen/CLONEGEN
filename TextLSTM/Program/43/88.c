main () {
    int n, i, j, a [10000], b [10000], c, d;
    scanf ("%d", &n);
    for (i = 2; i <= n; i++) {
        a[1] = 1;
        a[i] = i;
        b[i] = 1;
    }
    b[2] = 0;
    b[1] = 0;
    b[3] = 1;
    for (j = 2; j < sqrt (i); j++) {
        for (i = j + 1; i <= n; i++) {
            if (a[i] % a[j] == 0)
                b[i] = 0;
        }
    }
    for (i = 3; i <= n; i++) {
        for (j = 3; j <= n; j++)
            if (b[i] == 1 && b[j] == 1) {
                if (a[i] % 2 == 1 && a[j] % 2 == 1) {
                    if (n == a[i] + a[j] && (a[i] <= a[j]))
                        printf ("%d %d\n\n", a[i], a[j]);
                }
            }
    }
    getchar ();
    getchar ();
}

