int sz [ROW] [COL];

int main () {
    int row, col, a, b, c, d, t, s, x, n, m = 0, l = 0;
    scanf ("%d", &n);
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            scanf ("%d", &sz[row][col]);
        }
    }
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            if (sz[row][col] == 0) {
                a = row;
                b = col;
                m = 1;
                break;
            }
        }
        if (m == 1)
            break;
    }
    for (row = n - 1; row >= 0; row--) {
        for (col = n - 1; col >= 0; col--) {
            if (sz[row][col] == 0) {
                c = row;
                d = col;
                l = 1;
                break;
            }
        }
        if (l == 1)
            break;
    }
    t = c - a - 1;
    s = d - b - 1;
    if (t < 0 || s < 0) {
        x = 0;
    }
    else {
        x = t * s;
    }
    printf ("%d\n", x);
    return 0;
}

