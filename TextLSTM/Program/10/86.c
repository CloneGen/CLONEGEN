void main () {
    int i, j, n, s, k, d;
    int a [26], b [26];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
        b[i] = 0;
    }
    b[n] = 1;
    for (i = n - 1; i >= 1; i--) {
        for (j = i + 1; j <= n; j++)
            if ((a[j] <= a[i]) && (b[j] > b[i]))
                b[i] = b[j];
        b[i] = b[i] + 1;
    }
    s = 0;
    for (i = 1; i <= n; i++) {
        if (s < b[i])
            s = b[i];
    }
    printf ("%d", s);
}

