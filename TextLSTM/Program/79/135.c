void main () {
    int n, m, i, j, k, l, s, a [300];
    for (i = 0;; i++) {
        scanf ("%d%d", &n, &m);
        if (n == 0 && m == 0)
            break;
        else {
            for (j = 0; j < n; j++)
                a[j] = j + 1;
            s = 0;
            for (j = n - 1; j >= 1; j--) {
                if (m + s - 1 < j) {
                    a[m + s - 1] = 0;
                    s = m + s;
                }
                else {
                    if ((m + s) % (j + 1) == 0) {
                        a[j] = 0;
                        s = 0;
                    }
                    else {
                        a[(m + s) % (j + 1) - 1] = 0;
                        s = (m + s) % (j + 1);
                    }
                }
                l = 0;
                for (k = 0; k <= j; k++) {
                    if (a[k] != 0) {
                        a[l] = a[k];
                        if (k == s)
                            s = l;
                        l++;
                    }
                }
            }
            printf ("%d\n", a[0]);
        }
    }
}

