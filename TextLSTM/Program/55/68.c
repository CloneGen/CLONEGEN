main () {
    int a, b, i, c, d, x [2000], s = 0, e, l, k;
    char s1 [1000], s2 [1000], y [2000];
    scanf ("%d %s %d", &a, s1, &b);
    for (i = 0;; i++) {
        if (s1[i] == '\0') {
            s2[i] = '\0';
            break;
        }
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] = s1[i] - 'a' + 'A';
        }
        s2[i] = s1[i];
    }
    for (c = 0; c <= i - 1; c++) {
        if (s2[c] >= 'A' && s2[c] <= 'Z')
            x[c] = s2[c] - 55;
        else
            x[c] = s2[c] - 48;
    }
    for (d = i - 1; d >= 0; d--) {
        e = i - 1 - d;
        if (e != 0) {
            do {
                x[d] = x[d] * a;
                e--;
            }
            while (e > 0);
        }
        if (e == 0)
            x[d] = x[d];
        s = s + x[d];
    }
    if (s != 0) {
        for (l = 0; s != 0; l++) {
            if (s % b <= 9)
                y[l] = s % b + '0';
            else
                y[l] = s % b + '7';
            s = s / b;
        }
        for (k = l - 1; k >= 0; k--)
            printf ("%c", y[k]);
    }
    else
        printf ("0");
}

