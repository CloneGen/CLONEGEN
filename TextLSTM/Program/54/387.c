void main () {
    int i, j, k, l, m, n;
    scanf ("%d %d", &n, &k);
    for (i = 1;; i++) {
        m = i * (n - 1);
        for (j = n; j > 0; j--) {
            m = m * n / (n - 1) + k;
            if (m % (n - 1) != 0)
                break;
        }
        if (j == 1 || j == 0)
            break;
        if (j > 1)
            continue;
    }
    printf ("%d", m);
}

