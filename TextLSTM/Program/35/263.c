int main () {
    int a, b, i, j, n [8] [8], c [8] [8], d [8] [8], e, f, g = 0, p, q;
    scanf ("%d,%d", &a, &b);
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            c[i][j] = 0;
            d[i][j] = 0;
        }
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf ("%d", &n[i][j]);
        }
    }
    for (i = 0; i < a; i++) {
        e = 0;
        for (j = 0; j < b; j++) {
            if (e < n[i][j]) {
                e = n[i][j];
            }
        }
        for (j = 0; j < b; j++) {
            if (e == n[i][j])
                c[i][j] = 1;
        }
    }
    for (j = 0; j < b; j++) {
        f = 1000;
        for (i = 0; i < a; i++) {
            if (f > n[i][j]) {
                f = n[i][j];
            }
        }
        for (i = 0; i < a; i++) {
            if (f == n[i][j])
                d[i][j] = 1;
        }
    }
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (c[i][j] == 1 && d[i][j] == 1) {
                g = n[i][j];
                p = i;
                q = j;
            }
        }
    }
    if (g != 0)
        printf ("%d+%d", p, q);
    else
        printf ("No");
    return 0;
}

