main () {
    int a [25], b [25], c [25], i, j, n, max = 0, q;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        a[i] = 0;
        b[i] = 0;
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--) {
        for (j = i; j < n; j++) {
            if (a[i] >= a[j]) {
                c[j - i] = b[j] + 1;
            }
            else {
                c[j - i] = 1;
            }
        }
        for (j = 0; j < n - i; j++) {
            if (c[j] >= b[i])
                b[i] = c[j];
        }
    }
    for (i = 0; i < n; i++) {
        if (b[i] >= max)
            max = b[i];
    }
    printf ("%d", max);
}

