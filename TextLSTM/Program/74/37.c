void main () {
    long b = 0, i, j, l, n, k, x = 0, y, z = 0;
    double m;
    scanf ("%ld%ld", &k, &n);
    l = 0;
    for (i = k; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        m = sqrt (i);
        for (j = 3; j <= m; j += 2) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > m && i <= n) {
            y = i;
            x = 0;
            for (l = 1;; l++) {
                x = x * 10 + y - 10 * (y / 10);
                y = y / 10;
                if (y == 0) {
                    break;
                }
            }
            if (x == i && z == 0) {
                z = z + 1;
                printf ("%ld", i);
                b = b + 1;
            }
            else if (x == i && z != 0) {
                printf (",%ld", i);
                b = b + 1;
            }
            x = 0;
        }
    }
    if (b == 0) {
        printf ("no");
    }
}

