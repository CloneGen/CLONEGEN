main () {
    int m, n, r;
    scanf ("%d", &m);
    if (m != 1) {
        do {
            r = m % 2;
            n = m;
            if (r != 0) {
                m = m * 3 + 1;
                printf ("%d*3+1=%d\n", n, m);
            }
            if (r == 0) {
                m = m / 2;
                printf ("%d/2=%d\n", n, m);
            }
        }
        while (m != 1);
    }
    printf ("End");
}

