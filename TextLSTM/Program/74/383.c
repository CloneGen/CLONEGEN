void main () {
    int i, a, b, c, m, e, n, d, f, g, h = 0;
    scanf ("%d %d", &a, &b);
    for (c = a; c <= b; c++) {
        f = 0;
        if ((c % 10) != 0) {
            for (m = 1; m <= 10000000; m = m * 10) {
                if ((c % m) == c) {
                    e = m;
                    m = 10000001;
                }
            }
            for (n = 1; n < e; n = n * 10) {
                d = (c % (10 * n) - c % n) / n;
                f = d * e / (10 * n) + f;
            }
            if (f == c) {
                for (g = 2; g < c; g++) {
                    if (c % g == 0)
                        g = c + 1;
                }
                if (g == c) {
                    printf ("%d", c);
                    h = 1;
                    break;
                }
            }
        }
    }
    for (c = c + 1; c <= b; c++) {
        f = 0;
        if ((c % 10) != 0) {
            for (m = 1; m <= 10000000; m = m * 10) {
                if ((c % m) == c) {
                    e = m;
                    m = 10000001;
                }
            }
            for (n = 1; n < e; n = n * 10) {
                d = (c % (10 * n) - c % n) / n;
                f = d * e / (10 * n) + f;
            }
            if (f == c) {
                for (g = 2; g < c; g++) {
                    if (c % g == 0)
                        g = c + 1;
                }
                if (g == c) {
                    printf (",%d", c);
                }
            }
        }
    }
    if (h == 0)
        printf ("no");
}

