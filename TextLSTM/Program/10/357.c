main () {
    int a [30], b [30], n, i, j, c, d;
    scanf ("%d", &n);
    for (i = 0; i < 30; i++)
        b[i] = 1;
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = n - 2; i >= 0; i--) {
        d = 0;
        for (j = i + 1; j < n; j++)
            if (a[i] >= a[j])
                if (b[j] > d)
                    d = b[j];
        b[i] = b[i] + d;
    }
    c = b[0];
    for (i = 1; i < n; i++)
        if (b[i] > c)
            c = b[i];
    printf ("%d", c);
    getchar ();
    getchar ();
}

