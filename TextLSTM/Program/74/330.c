void main () {
    long a, b, c, d, e, x, y, i, j = 0, m, n, p [32768];
    int q = 0, s;
    double t;
    scanf ("%ld %ld", &m, &n);
    for (x = m; x <= n; x++) {
        a = x / 10000;
        b = x % 10000 / 1000;
        c = x % 1000 / 100;
        d = x % 100 / 10;
        e = x % 10;
        if (a != 0)
            y = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
        else {
            if (b != 0)
                y = e * 1000 + d * 100 + c * 10 + b;
            else {
                if (c != 0)
                    y = e * 100 + d * 10 + c;
                else {
                    if (d != 0)
                        y = e * 10 + d;
                    else
                        y = e;
                }
            }
        }
        t = sqrt (x);
        for (i = 2; i <= t; i++) {
            if (x % i == 0)
                j++;
        }
        if (x == y && j == 0) {
            p[q] = x;
            q++;
            j = 0;
        }
        else {
            j = 0;
            continue;
        }
    }
    if (q == 0)
        printf ("no\n");
    else {
        for (s = 0; s <= q - 2; s++)
            printf ("%ld,", p[s]);
        printf ("%ld\n", p[q - 1]);
    }
}

