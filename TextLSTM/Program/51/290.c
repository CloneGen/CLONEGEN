main () {
    char a [500];
    int c, d, e, f, g, h, i, k, m;
    int j [500];
    for (d = 0; d < 500; d++)
        j[d] = 0;
    scanf ("%d", &c);
    scanf ("%s", a);
    e = strlen (a);
    char b [c];
    for (d = 0; d < e - c + 1; d++) {
        for (f = 0, g = d; f < c; f++, g++)
            b[f] = a[g];
        for (i = 0, h = d; h < e - c + 1; h++) {
            for (m = 0; m < c; m++) {
                if (b[m] - a[h + m] == 0)
                    i++;
            }
            if (m == c) {
                if (i == c) {
                    j[d]++;
                }
                i = 0;
            }
        }
    }
    for (d = 0, k = j[0]; d < e - c; d++) {
        if (j[d] > k)
            k = j[d];
    }
    if (k == 1)
        printf ("NO");
    else {
        printf ("%d\n", k);
        for (d = 0; d < e - c; d++) {
            if (j[d] == k) {
                for (f = d; f < d + c; f++)
                    printf ("%c", a[f]);
                printf ("\n");
            }
        }
    }
}

