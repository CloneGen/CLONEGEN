int main () {
    int k, i, j, m, n, g, h, p, q = 0, a [25], b [25], c [25];
    for (i = 0; i < 25; i++)
        b[i] = 1;
    i = 0;
    scanf ("%d\n", &k);
    for (i = 0; i < k; i++) {
        if (i == 0)
            scanf ("%d", &a[0]);
        else
            scanf (" %d", &a[i]);
    }
    if (k == 1 || k == 0)
        printf ("%d", k);
    else {
        for (j = k - 2; j >= 0; j--) {
            for (p = j + 1; p < k; p++) {
                if (a[j] >= a[p]) {
                    c[q] = b[p];
                    q++;
                }
            }
            if (q == 0)
                b[j] = 1;
            else if (q == 1)
                b[j] = c[0] + b[j];
            else {
                for (g = 0; g < q - 1; g++) {
                    m = c[g];
                    n = c[g + 1];
                    if (m > n) {
                        c[g] = n;
                        c[g + 1] = m;
                    }
                }
                b[j] = c[q - 1] + b[j];
                q = 0;
                g = 0;
                p = j;
            }
        }
        for (h = 0; h < k - 1; h++) {
            m = b[h];
            n = b[h + 1];
            if (m > n) {
                b[h] = n;
                b[h + 1] = m;
            }
        }
        printf ("%d", b[k - 1]);
    }
}

