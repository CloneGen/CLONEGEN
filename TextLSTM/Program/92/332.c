void main () {
    int a [1000], b [1000], m [1000], i, j, k, t, x, y, c, d, n = 0;
    for (;;) {
        x = y = 0;
        scanf ("%d", &c);
        if (c == 0)
            break;
        else {
            t = k = c - 1;
            for (i = 0; i < c; i++)
                scanf ("%d", &a[i]);
            for (i = 0; i < c; i++)
                scanf ("%d", &b[i]);
            for (j = 0; j < c; j++) {
                for (i = 0; i < c - j - 1; i++)
                    if (a[i] > a[i + 1]) {
                        d = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = d;
                    }
            }
            for (j = 0; j < c; j++) {
                for (i = 0; i < c - j - 1; i++)
                    if (b[i] > b[i + 1]) {
                        d = b[i];
                        b[i] = b[i + 1];
                        b[i + 1] = d;
                    }
            }
            i = 0;
            j = 0;
        loop :
            while (i != (k + 1) && (a[i] != b[j] || a[k] != b[t])) {
                while (a[i] != b[j] && i != (k + 1)) {
                    if (a[i] < b[j])
                        y++, i++, t--;
                    else if (a[i] > b[j])
                        x++, i++, j++;
                    else
                        ;
                }
                while (a[k] != b[t] && i != (k + 1)) {
                    if (a[k] < b[t])
                        y++, i++, t--;
                    else if (a[k] > b[t])
                        x++, k--, t--;
                    else
                        ;
                }
            }
            if (i != (k + 1)) {
                if (a[i] < b[t])
                    y++, i++, t--;
                else if (a[i] = b[t])
                    i++, t--;
                goto loop;
            }
            if (i == (k + 1)) {
                m[n] = 200 * (x - y);
                n++;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf ("%d\n", m[i]);
}

