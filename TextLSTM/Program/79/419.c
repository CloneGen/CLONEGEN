void main () {
    int a [300], n [100], m [100], i, j, k, r, b [100], t, c;
    for (i = 0;; i++) {
        scanf ("%d%d", &n[i], &m[i]);
        if (n[i] == 0 && m[i] == 0)
            break;
    }
    c = i;
    for (t = 0; t < c; t++) {
        r = n[t] - 1;
        for (i = 0; i < n[t]; i++)
            a[i] = i + 1;
        for (i = 0, k = 1; r > 0; i++, k++) {
            if (m[t] == 1) {
                a[0] = a[r];
                break;
            }
            if (k == m[t]) {
                if (i == r) {
                    k = 1;
                    i = 0;
                    r--;
                    continue;
                }
                k = 1;
                for (j = i; j < r; j++)
                    a[j] = a[j + 1];
                r--;
            }
            if (i >= r)
                i = -1;
        }
        b[t] = a[0];
    }
    for (i = 0; i < c; i++) {
        if (i > 0)
            printf ("\n");
        printf ("%d", b[i]);
    }
}

