main () {
    int n = 1;
    while (1) {
        scanf ("%d", &n);
        if (n != 0) {
            int i, j, k = 0, m, lim, num = 0, win = 0, draw = 0, lose = 0, count, hehe;
            int t [1024], q [1024];
            for (i = 0; i < n; i++)
                scanf ("%d", &t[i]);
            for (i = 0; i < n; i++)
                scanf ("%d", &q[i]);
            for (i = n - 1; i > 0; i--) {
                for (j = 0; j < i; j++) {
                    if (t[j] > t[j + 1]) {
                        hehe = t[j];
                        t[j] = t[j + 1];
                        t[j + 1] = hehe;
                    }
                }
            }
            for (i = n - 1; i > 0; i--) {
                for (j = 0; j < i; j++) {
                    if (q[j] > q[j + 1]) {
                        hehe = q[j];
                        q[j] = q[j + 1];
                        q[j + 1] = hehe;
                    }
                }
            }
            lim = n;
            m = n;
            j = 0;
            for (i = 0; i < m; i++) {
                for (; j < lim;) {
                    if (t[i] > q[j]) {
                        win++;
                        j++;
                        break;
                    }
                    else if (t[i] < q[j]) {
                        lose++;
                        lim--;
                        break;
                    }
                    else if (t[i] == q[j]) {
                        if (t[m - 1] > q[lim - 1]) {
                            win++;
                            m--;
                            lim--;
                            i--;
                            break;
                        }
                        else if (t[m - 1] < q[lim - 1]) {
                            lose++;
                            lim--;
                            break;
                        }
                        else {
                            if (t[i] < q[lim - 1]) {
                                lose++;
                                lim--;
                                break;
                            }
                            else if (t[i] == q[lim - 1]) {
                                draw++;
                                lim--;
                                break;
                            }
                        }
                    }
                }
            }
            printf ("%d\n", 200 * (win - lose));
        }
        else
            break;
    }
}

