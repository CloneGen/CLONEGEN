int main () {
    int n [100], T [100] [1001], Q [100] [1001], i, j, k, r, t, mo, shi = 0, s = 0;
    for (i = 0; i < 100; i++) {
        scanf ("%d", &n[i]);
        if (n[i] == 0) {
            break;
        }
        for (j = 0; j < n[i]; j++) {
            scanf ("%d", &T[i][j]);
        }
        for (j = 0; j < n[i]; j++) {
            scanf ("%d", &Q[i][j]);
        }
    }
    for (j = 0; j < i; j++) {
        for (k = 0; k < n[j] - 1; k++) {
            for (r = 0; r < n[j] - 1 - k; r++) {
                if (T[j][r] < T[j][r + 1]) {
                    t = T[j][r];
                    T[j][r] = T[j][r + 1];
                    T[j][r + 1] = t;
                }
                if (Q[j][r] < Q[j][r + 1]) {
                    t = Q[j][r];
                    Q[j][r] = Q[j][r + 1];
                    Q[j][r + 1] = t;
                }
            }
        }
        mo = n[j] - 1;
        while (mo > shi) {
            if (T[j][mo] > Q[j][mo]) {
                s += 200;
                mo--;
            }
            else {
                if (T[j][shi] > Q[j][shi]) {
                    s += 200;
                    shi++;
                }
                else {
                    t = T[j][mo];
                    for (k = mo; k > shi; k--) {
                        T[j][k] = T[j][k - 1];
                    }
                    T[j][shi] = t;
                    if (T[j][shi] < Q[j][shi]) {
                        s -= 200;
                    }
                    else if (T[j][shi] > Q[j][shi]) {
                        s += 200;
                    }
                    shi++;
                }
            }
        }
        for (k = shi; k <= mo; k++) {
            if (T[j][k] > Q[j][k])
                s += 200;
            else if (T[j][k] < Q[j][k])
                s -= 200;
        }
        printf ("%d\n", s);
        s = 0;
        shi = 0;
    }
    return 0;
}

