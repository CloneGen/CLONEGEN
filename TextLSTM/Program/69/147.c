int main () {
    char a [255], b [255];
    int k [255] = {0};
    int c, d, e, i, f;
    gets (a);
    gets (b);
    c = (int) strlen (a);
    d = (int) strlen (b);
    for (i = 0; i < c / 2; i++) {
        e = a[i];
        a[i] = a[c - 1 - i];
        a[c - 1 - i] = e;
    }
    for (i = 0; i < d / 2; i++) {
        f = b[i];
        b[i] = b[d - 1 - i];
        b[d - 1 - i] = f;
    }
    if (c > d) {
        for (i = 0; i < d; i++) {
            k[i] = a[i] + b[i] - '0' - '0' + k[i];
        }
        for (i = d; i < c; i++) {
            k[i] = k[i] + a[i] - '0';
        }
        for (i = 0; i < c; i++) {
            k[i + 1] = k[i + 1] + k[i] / 10;
            k[i] = k[i] % 10;
        }
        for (i = c; i >= 0; i--) {
            c = i;
            if (k[i] != 0) {
                break;
            }
        }
        for (i = c; i >= 0; i--) {
            printf ("%d", k[i]);
        }
    }
    else {
        for (i = 0; i < c; i++) {
            k[i] = a[i] + b[i] - '0' - '0' + k[i];
        }
        for (i = c; i < d; i++) {
            k[i] = k[i] + b[i] - '0';
        }
        for (i = 0; i < d; i++) {
            k[i + 1] = k[i + 1] + k[i] / 10;
            k[i] = k[i] % 10;
        }
        for (i = d; i >= 0; i--) {
            d = i;
            if (k[i] != 0) {
                break;
            }
        }
        for (i = d; i >= 0; i--) {
            printf ("%d", k[i]);
        }
    }
    return 0;
}

