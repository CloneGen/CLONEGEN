main () {
    int n;
    for (;;) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        else {
            int i, j, k, lose = 0, win = 0, a1, a2, b1, b2, a [2000] = {0}, b [2000] = {0};
            for (i = 0; i < n; i++)
                scanf ("%d", &a[i]);
            for (i = 0; i < n; i++)
                scanf ("%d", &b[i]);
            for (i = 0; i < n - 1; i++) {
                for (j = i + 1; j < n; j++) {
                    if (a[i] > a[j])
                        k = a[i], a[i] = a[j], a[j] = k;
                    if (b[i] > b[j])
                        k = b[i], b[i] = b[j], b[j] = k;
                }
            }
            for (a1 = 0, a2 = n - 1, b1 = 0, b2 = n - 1; a1 <= a2;) {
                if (a[a1] > b[b1])
                    a1++, b1++, win++;
                else {
                    if (a[a1] < b[b1])
                        a1++, b2--, lose++;
                    else {
                        if (a[a2] > b[b2])
                            a2--, b2--, win++;
                        else {
                            if (a[a2] < b[b2])
                                a1++, b2--, lose++;
                            else {
                                if (a[a1] == a[a2])
                                    a1++, b1++;
                                else
                                    a1++, b2--, lose++;
                            }
                        }
                    }
                }
            }
            k = 200 * win - 200 * lose;
            printf ("%d\n", k);
        }
    }
}

