void main () {
    char c [100], d [100], e = 'a';
    long int a, b, m, k, s = 0, p, q, i = 0, j;
    scanf ("%d%s%d", &a, c, &b);
    m = strlen (c);
    while (c[i] != 0) {
        if ('A' <= c[i] && c[i] <= 'Z')
            c[i] += 'a' - 'A';
        i++;
    }
    for (i = 0; i < m; i++) {
        if (a <= 10)
            k = c[i] - 48;
        else {
            if (48 <= c[i] && c[i] <= 57)
                k = c[i] - 48;
            else {
                k = 9;
                while (e <= c[i]) {
                    k = k++;
                    e++;
                }
            }
        }
        for (j = 1; j < (m - i); j++)
            k = k * a;
        s = s + k;
        e = 'a';
    }
    i = 0;
    e = 'A';
    if (s == 0)
        printf ("0");
    else {
        while (s > 0) {
            p = s / b;
            q = s % b;
            s = p;
            if (0 <= q && q <= 9)
                d[i] = q + 48;
            else
                for (j = 10; j <= q; j++) {
                    d[i] = e;
                    e++;
                }
            i++;
            e = 'A';
        }
        i--;
        for (; i >= 0; i--)
            printf ("%c", d[i]);
    }
}

