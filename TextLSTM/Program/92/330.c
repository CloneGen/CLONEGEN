main () {
    int c, d, e, f, g, h, i, j, k, m, n;
    while (scanf ("%d", &c) && c != 0) {
        int a [c], b [c];
        for (d = 0; d < c; d++)
            scanf ("%d", &a[d]);
        for (d = 0; d < c; d++)
            scanf ("%d", &b[d]);
        for (e = 0; e < c - 1; e++)
            for (f = 0; f < c - 1; f++)
                if (a[f] < a[f + 1]) {
                    g = a[f];
                    a[f] = a[f + 1];
                    a[f + 1] = g;
                }
        for (e = 0; e < c - 1; e++)
            for (f = 0; f < c - 1; f++)
                if (b[f] < b[f + 1]) {
                    g = b[f];
                    b[f] = b[f + 1];
                    b[f + 1] = g;
                }
        i = 0;
        j = 0;
        k = c - 1;
        m = c - 1;
        for (n = 0, h = 0; n < c; n++) {
            if (a[k] > b[m]) {
                h++;
                k--;
                m--;
            }
            else if (a[k] < b[m]) {
                h--;
                k--;
                j++;
            }
            else {
                if (a[i] > b[j]) {
                    h++;
                    i++;
                    j++;
                }
                else if (a[i] < b[j]) {
                    h--;
                    k--;
                    j++;
                }
                else {
                    if (a[k] == b[j]) {
                        k--;
                        j++;
                    }
                    else {
                        h--;
                        k--;
                        j++;
                    }
                }
            }
        }
        printf ("%d\n", 200 * h);
    }
}

