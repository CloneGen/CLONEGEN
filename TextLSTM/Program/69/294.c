void chengfa (char a [], char b []) {
    char c [300] = {'\0'}, g;
    int na, nb, nc, i, j, t, d;
    na = strlen (a);
    nb = strlen (b);
    if (na == nb) {
        for (i = 0, d = 0; i <= na - 1; i++) {
            t = a[na - 1 - i] - 48 + b[nb - 1 - i] - 48;
            t = t + d;
            c[i] = t % 10 + 48;
            d = (t - t % 10) / 10;
        }
        if (d != 0)
            c[i] = d + 48;
    }
    else if (na > nb) {
        for (i = 0, d = 0; i <= nb - 1; i++) {
            t = a[na - 1 - i] - 48 + b[nb - 1 - i] - 48;
            t = t + d;
            c[i] = t % 10 + 48;
            d = (t - t % 10) / 10;
        }
        if (d != 0) {
            for (i = nb; i <= na - 1; i++) {
                t = a[na - 1 - i] - 48 + d;
                c[i] = t % 10 + 48;
                d = (t - t % 10) / 10;
            }
            if (d != 0)
                c[i] = d + 48;
        }
        else {
            for (i = nb; i <= na - 1; i++) {
                c[i] = a[na - 1 - i];
            }
        }
    }
    else {
        for (i = 0, d = 0; i <= na - 1; i++) {
            t = a[na - 1 - i] - 48 + b[nb - 1 - i] - 48;
            t = t + d;
            c[i] = t % 10 + 48;
            d = (t - t % 10) / 10;
        }
        if (d != 0) {
            for (i = na; i <= nb - 1; i++) {
                t = b[nb - 1 - i] - 48 + d;
                c[i] = t % 10 + 48;
                d = (t - t % 10) / 10;
            }
            if (d != 0)
                c[i] = d + 48;
        }
        else {
            for (i = na; i <= nb - 1; i++) {
                c[i] = b[nb - 1 - i];
            }
        }
    }
    nc = strlen (c);
    while (c[nc - 1] == 48) {
        c[nc - 1] = '\0';
        nc = strlen (c);
    }
    for (i = 0; i <= (nc - 1) / 2; i++) {
        g = c[i];
        c[i] = c[nc - 1 - i];
        c[nc - 1 - i] = g;
    }
    if (nc == 0)
        printf ("0");
    else
        printf ("%s", c);
    return;
}

int main () {
    char a [300], b [300];
    scanf ("%s", a);
    scanf ("%s", b);
    chengfa (a, b);
    return 0;
}

