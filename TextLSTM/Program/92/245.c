int main () {
    int n, t [1000], q [1000], i, j, win = 0, ping = 0, x = 0, num = 0;
    n = 1;
    while (n != 0) {
        int tian [1000] = {0};
        int qi [1000] = {0};
        win = 0;
        ping = 0;
        scanf ("%d\n", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
            scanf ("%d", &t[i]);
        for (i = 0; i < n; i++)
            scanf ("%d", &q[i]);
        for (j = 0; j < n; j++) {
            for (i = 1 + j; i < n; i++) {
                if (t[j] >= t[i]) {
                    num = t[i];
                    t[i] = t[j];
                    t[j] = num;
                }
            }
        }
        for (j = 0; j < n; j++) {
            for (i = 1 + j; i < n; i++) {
                if (q[j] >= q[i]) {
                    num = q[i];
                    q[i] = q[j];
                    q[j] = num;
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = n - 1; j >= 0; j--) {
                if (tian[i] == 0 && qi[j] == 0)
                    if (t[i] > q[j]) {
                        tian[i] = 1;
                        qi[j] = 1;
                        win++;
                        break;
                    }
            }
        }
        for (i = 0; i < n; i++) {
            if (tian[i] == 0)
                for (j = 0; j < n; j++) {
                    if (qi[j] == 0)
                        if (t[i] == q[j]) {
                            ping++;
                            break;
                        }
                }
        }
        printf ("%d\n", 400 * win + 200 * ping - 200 * n);
    }
    return 0;
}

