int main () {
    int k, m, n, s, i, j, a;
    for (scanf ("%d", &k); k > 0; k--) {
        s = 0;
        scanf ("%d%d", &m, &n);
        for (j = 0; j < n; j++) {
            scanf ("%d", &a);
            s = s + a;
        }
        for (i = 1; i < m - 1; i++) {
            scanf ("%d", &a);
            s = s + a;
            for (j = 1; j < n; j++)
                scanf ("%d", &a);
            if (n != 1)
                s = s + a;
        }
        if (m != 1)
            for (j = 0; j < n; j++) {
                scanf ("%d", &a);
                s = s + a;
            }
        printf ("%d\n", s);
    }
}

