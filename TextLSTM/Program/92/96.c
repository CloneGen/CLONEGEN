int main () {
    int n, y, z, i, s, t, u, j, k, l, m, win, lose, money;
    int a [1001], b [1001];
    for (;;) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (l = 0; l <= n - 1; l++) {
            scanf ("%d", &a[l]);
        }
        for (l = 0; l <= n - 1; l++) {
            scanf ("%d", &b[l]);
        }
        if (n >= 2) {
            for (y = 0; y <= n - 2; y++) {
                for (z = y + 1; z <= n - 1; z++) {
                    if (a[z] > a[y]) {
                        m = a[y];
                        a[y] = a[z];
                        a[z] = m;
                    }
                    if (b[z] > b[y]) {
                        m = b[y];
                        b[y] = b[z];
                        b[z] = m;
                    }
                }
            }
        }
        win = 0;
        lose = 0;
        if (n >= 2) {
            for (i = 1; i <= n - 1; i++) {
                if (a[0] > b[0]) {
                    win++;
                    for (s = 0; s <= n - i - 1; s++) {
                        a[s] = a[s + 1];
                        b[s] = b[s + 1];
                    }
                }
                else {
                    for (t = n - i; t >= 0; t--) {
                        if (a[t] > b[t]) {
                            win++;
                            i++;
                            if (n == i)
                                break;
                        }
                        else {
                            if (a[n - i] < b[0]) {
                                lose++;
                            }
                            for (u = 0; u <= n - i - 1; u++) {
                                b[u] = b[u + 1];
                            }
                            break;
                        }
                    }
                }
            }
        }
        if (a[0] > b[0])
            win++;
        if (a[0] < b[0])
            lose++;
        money = 200 * (win - lose);
        printf ("%d\n", money);
    }
    return 0;
}

