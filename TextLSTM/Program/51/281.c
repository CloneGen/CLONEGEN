main () {
    int a, b, c, d, m, n;
    char x [510];
    int y [510] = {0};
    scanf ("%d", &n);
    scanf ("%s", x);
    a = strlen (x) - 1;
    for (b = 0; b <= a - n + 1; b++) {
        for (c = b; c <= a - n + 1; c++) {
            for (d = 0; d <= n - 1; d++) {
                if (x[c + d] != x[b + d])
                    break;
                else
                    ;
            }
            if (d == n)
                y[b]++;
            else
                ;
        }
    };
    m = y[0];
    for (b = 0; b <= a - n + 1; b++) {
        if (y[b] > m)
            m = y[b];
        else
            ;
    }
    if (m == 1)
        printf ("NO");
    else {
        printf ("%d\n", m);
        for (b = 0; b <= a - n + 1; b++) {
            if (y[b] == m) {
                for (c = 0; c <= n - 1; c++)
                    printf ("%c", x[b + c]);
                printf ("\n");
            }
        }
    }
}

