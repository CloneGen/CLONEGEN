int main () {
    int len = 0, n, i, j, k, m = 0, h = 0, r = 0, d = 0, q = 0, a [500];
    scanf ("%d", &n);
    char c [501];
    gets (c);
    gets (c);
    len = strlen (c);
    for (i = 0; i < len - n; i++) {
        m = 0;
        for (j = i + 1; j <= len - n; j++) {
            r = 0;
            for (k = 0; k < n; k++) {
                if (c[i + k] == c[j + k]) {
                    r = r++;
                }
            }
            if (r == n) {
                m = m++;
            }
        }
        a[i] = m;
    }
    for (i = 0; i < len - n; i++) {
        d = 0;
        for (j = 0; j < len - n; j++) {
            if (a[i] >= a[j]) {
                d = d++;
            }
        }
        if (d == len - n) {
            h = a[i] + 1;
            break;
        }
    }
    if (h <= 1) {
        printf ("NO\n");
    }
    else {
        for (i = 0; i < len - n; i++) {
            d = 0;
            for (j = 0; j < len - n; j++) {
                if (a[i] >= a[j]) {
                    d = d++;
                }
            }
            if (d == len - n) {
                h = a[i] + 1;
                break;
            }
        }
        printf ("%d\n", h);
        for (i = 0; i < len - n; i++) {
            d = 0;
            for (j = 0; j < len - n; j++) {
                if (a[i] >= a[j]) {
                    d = d++;
                }
            }
            if (d == len - n) {
                for (k = i; k < i + n; k++) {
                    printf ("%c", c[k]);
                }
                printf ("\n");
            }
        }
        if (d == len - n) {
            if (h == 1) {
                for (q = len - n; q < len; q++)
                    printf ("%c", c[q]);
            }
        }
    }
    return 0;
}

