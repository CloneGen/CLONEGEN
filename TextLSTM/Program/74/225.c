void main () {
    int m, n, s, k, j, i, b = 0, d = 0, a [1000], x = 0;
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i++) {
        s = i;
        k = 0;
        while (s != 0) {
            k = 10 * k + s % 10;
            s = s / 10;
        }
        if (k == i) {
            a[d] = i;
            d++;
        }
    }
    k = d;
    for (i = 0; i < d; i++) {
        for (j = 2; j <= sqrt (a[i]); j++) {
            if (a[i] % j == 0)
                break;
        }
        if (j <= sqrt (a[i])) {
            a[i] = 0;
            k--;
        }
        else
            x = 1;
    }
    j = 0;
    for (i = 0; i < d; i++) {
        if (a[i] != 0) {
            j++;
            if (j < k)
                printf ("%d,", a[i]);
            else
                printf ("%d", a[i]);
        }
    }
    if (x == 0)
        printf ("no");
}

