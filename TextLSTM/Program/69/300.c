main () {
    int a, b, c, m, n, i, j, r;
    char x [1000];
    char y [1000];
    gets (x);
    gets (y);
    i = strlen (x);
    j = strlen (y);
    i--;
    j--;
    r = i > j ? i : j;
    for (a = 0; a <= i + 1; a++) {
        x[r + 1 - a] = x[i + 1 - a];
        y[r + 1 - a] = y[j + 1 - a];
    }
    for (a = 0; a <= r - i - 1; a++)
        x[a] = '0';
    for (a = 0; a <= r - j - 1; a++)
        y[a] = '0';
    int z [1000] = {0};
    m = 0;
    for (a = r; a >= 0; a--) {
        n = (x[a] - '0') + (y[a] - '0') + m;
        z[a] = n % 10;
        m = n / 10;
    }
    if (m == 0) {
        for (a = 0; a <= r; a++) {
            if (z[a] != 0)
                break;
            else
                ;
        }
        if (a == r + 1)
            printf ("0");
        else
            ;
        {
            for (b = a; b <= r; b++)
                printf ("%d", z[b]);
        }
    }
    else {
        printf ("%d", m);
        for (a = 0; a <= r; a++)
            printf ("%d", z[a]);
    }
}

