void main () {
    int h, i, j = 0, k = 0, l = 0, t, p, d = 1;
    char a [500];
    int b [50], c [50];
    gets (a);
    h = strlen (a);
    for (i = 0; i <= h; i++) {
        if (((a[i] >= 'a') && (a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z'))) {
            j++;
        }
        if ((a[i] == ' ') || (a[i] == '\0')) {
            l++;
            c[l] = i;
            b[l] = j;
            j = 0;
        }
    }
    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l - i; j++)
            if (b[j] < b[j + 1]) {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
                p = c[j];
                c[j] = c[j + 1];
                c[j + 1] = p;
            }
    }
    for (i = 2; i <= l; i++) {
        if (c[i] != c[1])
            break;
        if (c[i] == c[1])
            d++;
    }
    for (i = 1; i <= d; i++) {
        for (j = 1; j <= d - i; j++)
            if (c[j] > c[j + 1]) {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
                p = c[j];
                c[j] = c[j + 1];
                c[j + 1] = p;
            }
    }
    d = 0;
    for (i = l - 1; i >= 1; i--) {
        if (b[i] == b[l])
            d++;
        if (b[i] != b[l])
            break;
    }
    for (i = c[1] - b[1]; i < c[1]; i++) {
        printf ("%c", a[i]);
    }
    printf ("\n");
    for (i = c[l - d] - b[l - d]; i < c[l - d]; i++) {
        printf ("%c", a[i]);
    }
}

