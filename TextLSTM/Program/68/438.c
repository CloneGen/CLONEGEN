void main () {
    int su [25000] = {0}, i, j = 1, n, q, u, k, a1, a2, p, sum = 0;
    scanf ("%d", &n);
    su[0] = 2;
    for (i = 3; i <= n / 2; i++) {
        u = 1;
        q = (int) pow (i, 0.5);
        if (q < 3) {
            if (i % 2 != 0) {
                su[j] = i;
                j++;
            }
        }
        if (q >= 3) {
            if (i % 2 == 0) {
                u = 0;
            }
            else if (i % 2 != 0) {
                for (k = 2; k <= (q + 1) / 2; k++) {
                    if (i % (2 * k - 1) == 0) {
                        u = 0;
                        break;
                    }
                }
            }
            if (u != 0) {
                su[j] = i;
                j++;
            }
        }
    }
    for (j = 0; j <= 24999; j++) {
        if (su[j] != 0) {
            sum = sum + 1;
        }
        else
            break;
    }
    for (i = 3; i <= n / 2; i++) {
        p = 2 * i;
        for (j = 0; j <= sum - 1; j++) {
            a1 = su[j];
            a2 = p - su[j];
            int sushu (int x);
            if (sushu (a2) == 1) {
                printf ("%d=%d+%d\n", p, a1, a2);
                break;
            }
        }
    }
}

int sushu (int x) {
    int v = 1, e, t;
    e = (int) pow (x, 0.5);
    if (x == 2) {
        v = 1;
    }
    if (x > 2 && e < 3) {
        if (x % 2 == 0) {
            v = 0;
        }
    }
    else {
        if (x % 2 == 0) {
            v = 0;
        }
        else {
            for (t = 2; t <= (e + 1) / 2; t++) {
                if (x % (2 * t - 1) == 0) {
                    v = 0;
                    break;
                }
            }
        }
    }
    return (v);
}

