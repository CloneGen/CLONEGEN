main () {
    int a, b, c, d, e, n, m, p, q;
    for (; 1;) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        else {
            int x [1010] = {0};
            int y [1010] = {0};
            for (a = 0; a <= n - 1; a++) {
                scanf ("%d", &x[a]);
            }
            for (a = 0; a <= n - 1; a++) {
                scanf ("%d", &y[a]);
            }
            for (a = 0; a <= n - 2; a++) {
                for (b = a + 1; b <= n - 1; b++) {
                    if (x[a] < x[b]) {
                        c = x[a];
                        x[a] = x[b];
                        x[b] = c;
                    }
                    else
                        ;
                    if (y[a] < y[b]) {
                        c = y[a];
                        y[a] = y[b];
                        y[b] = c;
                    }
                }
            }
            m = 0;
            q = n - 1;
            p = n - 1;
            a = 0;
            for (b = 0; b <= q;) {
                if (x[a] > y[b]) {
                    m += 200;
                    a++;
                    b++;
                }
                else if (x[a] < y[b]) {
                    m -= 200;
                    b++;
                    p--;
                }
                else {
                    if (x[p] > y[q]) {
                        m += 200;
                        p--;
                        q--;
                    }
                    else {
                        if (x[p] > y[b]) {
                            m += 200;
                            p--;
                            b++;
                        }
                        else if (x[p] == y[b]) {
                            p--;
                            b++;
                        }
                        else {
                            m -= 200;
                            p--;
                            b++;
                        }
                    }
                }
            }
            printf ("%d\n", m);
        }
    }
}

