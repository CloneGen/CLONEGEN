void main () {
    int m, n, x, i, r, y, k, s, c, time, t, haha;
    scanf ("%d%d", &m, &n);
    c = 0;
    for (x = m; x <= n; x++) {
        time = 0;
        for (i = 2; i < x; i++) {
            if (x % i != 0)
                time = time + 1;
            else
                break;
        }
        if (time == x - 2) {
            y = 0;
            for (r = 0;; r++) {
                haha = pow (10, r);
                if (x / haha == 0)
                    break;
            }
            t = x;
            for (k = 1; k <= r; k++) {
                s = t % 10;
                t = t / 10;
                y = 10 * y + s;
            }
            if (x == y) {
                c = c + 1;
                if (c == 1)
                    printf ("%d", x);
                if (c > 1)
                    printf (",%d", x);
            }
        }
    }
    if (c == 0)
        printf ("no");
}

