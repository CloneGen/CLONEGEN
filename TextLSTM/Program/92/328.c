main () {
    for (;;) {
        int a [1050] = {0}, b [1050] = {0};
        int i, j, k, t, h, m, w1 = 0, w2 = 0, w3 = 0;
        int n;
        scanf ("%d", &n);
        if (n == 0)
            break;
        else {
            for (i = 1; i <= n; i++)
                scanf ("%d", &a[i]);
            for (i = 1; i <= n; i++)
                scanf ("%d", &b[i]);
            for (i = 1; i <= n - 1; i++) {
                for (j = i + 1; j <= n; j++) {
                    if (a[i] > a[j])
                        t = a[i], a[i] = a[j], a[j] = t;
                    if (b[i] > b[j])
                        t = b[i], b[i] = b[j], b[j] = t;
                }
            }
            for (i = 1, h = n, m = n, j = 1; i <= m;) {
                for (; j <= h;) {
                    if (a[i] > b[j]) {
                        w1++;
                        j++;
                        i++;
                        break;
                    }
                    if (a[i] < b[j]) {
                        w2++;
                        i++;
                        h = h - 1;
                        break;
                    }
                    if (a[i] == b[j]) {
                        if (a[m] > b[h]) {
                            w1++;
                            m = m - 1, h = h - 1;
                            break;
                        }
                        if (a[m] < b[h]) {
                            w2++;
                            h = h - 1;
                            i++;
                            break;
                        }
                        if (a[m] == b[h]) {
                            if (a[i] == b[h]) {
                                i++;
                                h = h - 1;
                                break;
                            }
                            if (a[i] < b[h]) {
                                w2++;
                                i++;
                                h = h - 1;
                                break;
                            }
                        }
                    }
                }
            }
            w3 = 200 * w1 - 200 * w2;
            printf ("%d\n", w3);
        }
    }
}

