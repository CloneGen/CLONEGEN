int main () {
    int n, s [1000] [1000], i, j, a, b, c, d, log = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &s[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (s[i][j] == 0) {
                log = 1;
                a = i;
                b = j;
                break;
            }
        }
        if (log) {
            break;
        }
    }
    log = 0;
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            if (s[i][j] == 0) {
                log = 1;
                c = i;
                d = j;
                break;
            }
        }
        if (log) {
            break;
        }
    }
    printf ("%d", (c - a - 1) * (d - b - 1));
    return 0;
}

