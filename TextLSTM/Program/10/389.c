main () {
    int a [26], f [26];
    int i, j, k, n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        f[i] = 1;
    }
    for (i = 1; i < n; i++) {
        for (j = i - 1; j >= 0; j--) {
            if (a[j] >= a[i] && f[j] + 1 > f[i])
                f[i] = f[j] + 1;
        }
    }
    k = 0;
    for (i = 0; i < n; i++) {
        if (f[i] > k)
            k = f[i];
    }
    printf ("%d", k);
    getchar ();
    getchar ();
    getchar ();
}

