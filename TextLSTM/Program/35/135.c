int main () {
    int i, k, r, c, a [8] [8], p, q, n = 0;
    scanf ("%d,%d", &r, &c);
    for (i = 0; i < r; i++) {
        for (k = 0; k < c; k++) {
            scanf ("%d", &(a[i][k]));
        }
    }
    for (i = 0; i < r; i++) {
        for (k = 0; k < c; k++) {
            for (p = 0; p < c; p++) {
                if (a[i][k] < a[i][p]) {
                    break;
                }
                if (p == c - 1) {
                    for (q = 0; q < r; q++) {
                        if (a[i][k] > a[q][k]) {
                            break;
                        }
                        if (q == r - 1) {
                            printf ("%d+%d", i, k);
                            n = n + 1;
                            break;
                        }
                    }
                }
                if (n == 1) {
                    break;
                }
            }
            if (n == 1) {
                break;
            }
        }
        if (n == 1) {
            break;
        }
    }
    if (n == 0) {
        printf ("No");
    }
    return 0;
}

