void main () {
    int a, b, i, j = 0, k, h, l = 0, p, q, m = 0, n;
    scanf ("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        k = sqrt (i);
        for (h = 2; h <= k; h++) {
            if (i % h == 0)
                break;
        }
        if (h >= k + 1 && i != 1) {
            p = i;
            while (p != 0) {
                q = p % 10;
                j = j * 10 + q;
                p = p / 10;
            }
            if (i == j) {
                printf ("%d", j);
                m = 1;
                n = j;
                break;
            }
            j = 0;
        }
    }
    j = 0;
    for (i = n + 1; i <= b; i++) {
        k = sqrt (i);
        for (h = 2; h <= k; h++) {
            if (i % h == 0)
                break;
        }
        if (h >= k + 1 && i != 1) {
            p = i;
            while (p != 0) {
                q = p % 10;
                j = j * 10 + q;
                p = p / 10;
            }
            if (i == j) {
                printf (",%d", j);
                m = 1;
            }
            j = 0;
        }
    }
    if (m == 0)
        printf ("no");
}

