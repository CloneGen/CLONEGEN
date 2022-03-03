main () {
    int a, b;
    scanf ("%d %d", &a, &b);
    if (a == b) {
        printf ("%d\n", a);
    }
    else if (a == 1 || b == 1) {
        printf ("1\n");
    }
    else {
        int f, i = 0, j = 0, n, m, t = 0;
        int w [500], v [500];
        f = a;
        w[0] = f;
        while (f != 0) {
            f = f / 2;
            i++;
            w[i] = f;
        }
        f = b;
        v[0] = f;
        while (f != 0) {
            f = f / 2;
            j++;
            v[j] = f;
        }
        if (i < j) {
            for (n = 0; n < i; n++) {
                for (m = 0; m < j; m++) {
                    if (v[m] == w[n]) {
                        printf ("%d\n", w[n]);
                        t++;
                        break;
                    }
                }
                if (t > 0) {
                    break;
                }
            }
        }
        else {
            for (n = 0; n < j; n++) {
                for (m = 0; m < i; m++) {
                    if (w[m] == v[n]) {
                        printf ("%d\n", v[n]);
                        t++;
                        break;
                    }
                }
                if (t > 0) {
                    break;
                }
            }
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

