void main () {
    int m, n, t, i, k, j, p, q, l, a, b, s;
    b = 0, s = 0;
    scanf ("%d%d", &m, &n);
    for (a = m; a <= n; a++) {
        t = sqrt (a);
        for (i = 2; i <= t; i++)
            if (a % i == 0)
                break;
        if (i >= t + 1) {
            k = a;
            j = 0;
            while (k != 0) {
                k = (k - k % 10) / 10;
                j = j + 1;
            }
            p = a;
            q = 0;
            for (l = j; l >= 1; l--) {
                q = (p % 10) * pow (10, l - 1) + q;
                p = (p - p % 10) / 10;
            }
            if (a == q) {
                b = b + 1;
            }
        }
    }
    for (a = m; a <= n; a++) {
        t = sqrt (a);
        for (i = 2; i <= t; i++)
            if (a % i == 0)
                break;
        if (i >= t + 1) {
            k = a;
            j = 0;
            while (k != 0) {
                k = (k - k % 10) / 10;
                j = j + 1;
            }
            p = a;
            q = 0;
            for (l = j; l >= 1; l--) {
                q = (p % 10) * pow (10, l - 1) + q;
                p = (p - p % 10) / 10;
            }
            if (a == q) {
                s = s + 1;
                if (s < b)
                    printf ("%d,", a);
                else
                    printf ("%d", a);
            }
        }
    }
    if (b == 0)
        printf ("no");
}

