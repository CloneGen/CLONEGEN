void main () {
    int i, j, k = 1, m, n, x, y, z, s = 0, a [10000];
    scanf ("%d%d", &m, &n);
    if (m <= 2) {
        a[0] = 2;
        s++;
    }
    if (m % 2 == 0)
        m++;
    for (i = m; i <= n;) {
        for (j = 3; j <= sqrt (i); j++) {
            if (i % j == 0)
                break;
        }
        if (i % j == 0) {
            i = i + 2;
            continue;
        }
        x = i;
        y = 0;
        while (x > 0) {
            y *= 10;
            y += x % 10;
            x /= 10;
        }
        if (y == i) {
            a[s] = i;
            s++;
        }
        i = i + 2;
    }
    if (s == 0)
        printf ("no");
    else {
        printf ("%d", a[0]);
        for (i = 1; i < s; i++)
            printf (",%d", a[i]);
    }
}

