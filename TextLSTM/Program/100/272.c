int main () {
    char a [305], b [305], c [305], l;
    int i, j, m = 0, n = 0, p = 1, q = 1, d [305], e [305], o, h = 0;
    gets (a);
    for (i = 0; i < strlen (a); i++) {
        if (a[i] >= 65 && a[i] <= 90) {
            b[m] = a[i];
            for (j = i + 1; j < strlen (a); j++) {
                if (a[j] == a[i]) {
                    p++;
                    a[j] = '&';
                }
            }
            d[m] = p;
            p = 1;
            m++;
            h++;
        }
        else if (a[i] >= 97 && a[i] <= 122) {
            c[n] = a[i];
            for (j = i + 1; j < strlen (a); j++) {
                if (a[j] == a[i]) {
                    q++;
                    a[j] = '&';
                }
            }
            e[n] = q;
            q = 1;
            n++;
            h++;
        }
    }
    for (i = 1; i < m; i++) {
        for (j = 0; j < m - i; j++) {
            if (b[j] > b[j + 1]) {
                l = b[j];
                b[j] = b[j + 1];
                b[j + 1] = l;
                o = d[j];
                d[j] = d[j + 1];
                d[j + 1] = o;
            }
        }
    }
    for (i = 1; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (c[j] > c[j + 1]) {
                l = c[j];
                c[j] = c[j + 1];
                c[j + 1] = l;
                o = e[j];
                e[j] = e[j + 1];
                e[j + 1] = o;
            }
        }
    }
    if (h != 0) {
        for (i = 0; i < m; i++) {
            if (i == 0) {
                printf ("%c=%d\n", b[0], d[0]);
            }
            else
                printf ("%c=%d\n", b[i], d[i]);
        }
        for (i = 0; i < n; i++) {
            printf ("%c=%d\n", c[i], e[i]);
        }
    }
    else
        printf ("No");
    return 0;
}

