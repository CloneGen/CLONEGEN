int main () {
    long a = 1, t [1002], y, q [1002], t1 [1002], q1 [1002], i, b, c, j, win = 0, lose = 0, ping = 0, x = 0, k;
    a = 1;
    while (a != 0) {
        long t2 [1002] = {0}, q2 [1002] = {0}, t3 [1002] = {0}, q3 [1002] = {0};
        win = 0;
        lose = 0;
        ping = 0;
        scanf ("%d\n", &a);
        if (a == 0)
            break;
        for (i = 1; i <= a; i++)
            scanf ("%d", &t[i]);
        for (i = 1; i <= a; i++)
            scanf ("%d", &q[i]);
        b = t[1];
        for (j = 1; j <= a; j++) {
            for (i = 1 + j; i <= a; i++) {
                if (t[j] >= t[i]) {
                    c = t[i];
                    t[i] = t[j];
                    t[j] = c;
                }
            }
        }
        for (j = 1; j <= a; j++) {
            for (i = 1 + j; i <= a; i++) {
                if (q[j] >= q[i]) {
                    c = q[i];
                    q[i] = q[j];
                    q[j] = c;
                }
            }
        }
        for (i = 1; i <= a; i++) {
            for (j = a; j != 0; j--) {
                if (t2[i] == 0 && q2[j] == 0)
                    if (t[i] > q[j]) {
                        t2[i] = 1;
                        q2[j] = 1;
                        win = win + 1;
                        break;
                    }
            }
        }
        for (i = 1; i <= a; i++) {
            if (t2[i] == 0)
                for (j = 1; j <= a; j++) {
                    if (q2[j] == 0)
                        if (t[i] == q[j]) {
                            ping = ping + 1;
                            break;
                        }
                }
        }
        k = 400 * win - 200 * a + 200 * ping;
        printf ("%d\n", k);
    }
    return 0;
}

