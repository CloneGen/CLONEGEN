main () {
    int a, b, c, d, i, j;
    scanf ("%d", &a);
    for (c = 6; c <= a; c += 2)
        for (i = 3; i <= c; i += 2) {
            for (b = 1, j = 3; j <= sqrt (i); j += 2) {
                b = i % j;
                if (!b)
                    break;
            }
            if (b) {
                d = c - i;
                for (b = 1, j = 3; j <= sqrt (d); j += 2) {
                    b = d % j;
                    if (!b)
                        break;
                }
            }
            if (b) {
                printf ("%d=%d+%d\n", c, i, d);
                break;
            }
        }
}

