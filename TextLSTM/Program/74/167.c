void main () {
    int i, j, m, n, s [10000], t, l, z = 0, x = 0, a [10000], c [10000], e [10000], b [10000] [6], d [10000];
    scanf ("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        t = 0;
        for (j = 2; j < i; j++) {
            if (i % j != 0)
                continue;
            else {
                t = 1;
                break;
            }
        }
        if (t == 0) {
            a[z] = i;
            c[z] = i;
            e[z] = i;
            z++;
        }
    }
    for (i = 0; i < z; i++) {
        for (s[i] = 1;; s[i]++) {
            c[i] = c[i] / 10;
            if (c[i] < 1)
                break;
        }
    }
    for (i = 0; i < z; i++) {
        for (j = 0; j < s[i]; j++) {
            b[i][j] = a[i] % 10;
            a[i] = a[i] / 10;
        }
        l = 0;
        for (j = 0; j < s[i]; j++) {
            if (b[i][j] == b[i][s[i] - 1 - j]) {
                continue;
            }
            else {
                l = 1;
                break;
            }
        }
        if (l == 0) {
            d[x] = e[i];
            x++;
        }
    }
    if (x == 0)
        printf ("no");
    else {
        printf ("%d", d[0]);
        for (i = 1; i < x; i++)
            printf (",%d", d[i]);
    }
}

