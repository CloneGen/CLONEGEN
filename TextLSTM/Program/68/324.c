void main () {
    int n, i = 6, j, k1, k2, k3, m, p, q, h, k;
    scanf ("%d", &n);
    for (; i <= n; i = i + 2) {
        printf ("%d=", i);
        for (m = 3; m <= (i / 2); m += 2) {
            k1 = sqrt (m);
            h = i - m;
            k3 = sqrt (h);
            if (m == 3) {
                if (h == 3) {
                    printf ("3+3\n");
                    break;
                }
                else {
                    for (k = 2; k <= k3; k++)
                        if (h % k == 0)
                            break;
                    if (k > k3) {
                        printf ("3+%d\n", h);
                        break;
                    }
                }
            }
            else {
                for (j = 2; j <= k1; j++)
                    if (m % j == 0)
                        break;
                if (j > k1) {
                    p = i - m;
                    k2 = sqrt (p);
                    if (p == 3)
                        printf ("%d+3\n", m);
                    else {
                        for (q = 2; q <= k2; q++)
                            if (p % q == 0)
                                break;
                        if (q > k2) {
                            printf ("%d+%d\n", m, p);
                            break;
                        }
                    }
                }
            }
        }
    }
}

