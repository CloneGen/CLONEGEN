int main () {
    int cs [1000], cs2 [300], n, i, t1 = 0, t2 = 0, t, tp, l, m;
    char c [300], d [300], x [300];
    gets (c);
    n = strlen (c);
    for (i = 0; i <= 300; i++) {
        cs[i] = 0;
        cs2[i] = 0;
    }
    for (i = 0; i < n; i++) {
        if (c[i] >= 'A' && c[i] <= 'Z') {
            d[t1] = c[i];
            t1 += 1;
        }
        if (c[i] >= 'a' && c[i] <= 'z') {
            x[t2] = c[i];
            t2 += 1;
        }
    }
    for (l = 0; l <= t1 - 1; l++) {
        for (m = 0; m <= t1 - 1; m++) {
            if (d[m] == d[l])
                cs[l] += 1;
        }
    }
    for (i = 0; i < t1 - 1; i++) {
        for (l = t1 - 1; l > i; l--) {
            if (d[l] < d[l - 1]) {
                t = d[l];
                d[l] = d[l - 1];
                d[l - 1] = t;
                tp = cs[l];
                cs[l] = cs[l - 1];
                cs[l - 1] = tp;
            }
        }
    }
    for (i = 0; i < t1; i++) {
        for (l = i + 1; l < t1; l++) {
            if (d[l] == d[i]) {
                cs[l] = 0;
            }
        }
    }
    for (i = 0; i < t1; i++) {
        if (cs[i] != 0) {
            printf ("%c=%d\n", d[i], cs[i]);
        }
    }
    for (l = 0; l <= t2 - 1; l++) {
        for (m = 0; m <= t2 - 1; m++) {
            if (x[m] == x[l])
                cs2[l] += 1;
        }
    }
    for (i = 0; i < t2 - 1; i++) {
        for (l = t2 - 1; l > i; l--) {
            if (x[l] < x[l - 1]) {
                t = x[l];
                x[l] = x[l - 1];
                x[l - 1] = t;
                tp = cs2[l];
                cs2[l] = cs2[l - 1];
                cs2[l - 1] = tp;
            }
        }
    }
    for (i = 0; i < t2; i++) {
        for (l = i + 1; l < t2; l++) {
            if (x[l] == x[i]) {
                cs2[l] = 0;
            }
        }
    }
    for (i = 0; i < t2; i++) {
        if (cs2[i] != 0) {
            printf ("%c=%d\n", x[i], cs2[i]);
        }
    }
    if (cs[0] == 0 && cs2[0] == 0)
        printf ("No");
    return 0;
}

