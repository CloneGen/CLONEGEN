int main () {
    int m, n, s, sz [10] [10], i, j, p [10] = {0}, q = 10000, a [10], b, c, t [10] = {0}, k, h, l;
    scanf ("%d,%d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &sz[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (sz[i][j] > p[i]) {
                p[i] = sz[i][j];
                a[i] = j;
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (k = 0; k < m; k++) {
            if (sz[k][a[i]] < p[i]) {
                t[i] = 1;
                break;
            }
            else {
                if (p[i] < q) {
                    q = p[i];
                    b = i;
                    c = a[i];
                }
            }
        }
    }
    for (i = 0; i < m; i++) {
        if (t[i] == 0) {
            s = 0;
        }
    }
    if (s == 0) {
        printf ("%d+%d", b, c);
    }
    else {
        printf ("No");
    }
    return 0;
}

