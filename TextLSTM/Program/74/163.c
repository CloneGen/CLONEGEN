void main () {
    int n, m, i, j, s, u = 0, r1, r2, k;
    scanf ("%d%d", &n, &m);
    for (i = n; i <= m; i++)
        if (i % 2 == 1) {
            for (j = 3; j <= sqrt (i); j += 2)
                if (i % j == 0)
                    break;
            if (j > sqrt (i)) {
                r1 = i;
                r2 = 0;
                for (;;) {
                    if (r1 > 0) {
                        r2 = r2 * 10 + r1 % 10;
                        r1 = r1 / 10;
                    }
                    else {
                        if (i == r2) {
                            if (u == 0)
                                printf ("%d", i);
                            else
                                printf (",%d", i);
                            ++u;
                        }
                        break;
                    }
                }
            }
        }
    if (u == 0)
        printf ("no");
    printf ("\n");
}

