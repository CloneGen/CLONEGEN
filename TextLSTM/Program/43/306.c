main () {
    int m, i, j, p1 = 0, p2 = 0;
    scanf ("%d", &m);
    if (m > 5 && m % 2 == 0 && m < 10001)
        for (i = 3; i <= m / 2; i = i + 2) {
            for (j = 3; j < i; j = j + 2) {
                if (i % j == 0 || (m - i) % j == 0) {
                    p1 = 1;
                    break;
                }
            }
            for (j = i; j < m - i; j = j + 2) {
                if ((m - i) % j == 0) {
                    p2 = 1;
                    break;
                }
            }
            if (p1 == 0 && p2 == 0)
                printf ("%d %d\n", i, m - i);
            p1 = 0;
            p2 = 0;
        }
    return (0);
}

