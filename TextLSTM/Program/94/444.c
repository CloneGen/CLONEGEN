int main () {
    int n, sz1 [500], sz2 [500], i, j, k, e, m;
    scanf ("%d", &n);
    m = 0;
    j = 0;
    sz2[500] = 0;
    for (i = 0; i <= n - 1; i++) {
        scanf ("%d", &sz1[i]);
    }
    for (i = 0; i <= n - 1; i++) {
        if (sz1[i] % 2 != 0) {
            sz2[j] = sz1[i];
            j++;
            m = m + 1;
        }
    }
    for (k = 1; k <= m - 1; k++) {
        for (j = 0; j <= m - k - 1; j++) {
            if (sz2[j] > sz2[j + 1]) {
                e = sz2[j + 1];
                sz2[j + 1] = sz2[j];
                sz2[j] = e;
            }
        }
    }
    for (j = 0; j <= m - 1; j++) {
        if (j == m - 1) {
            printf ("%d", sz2[j]);
        }
        else {
            printf ("%d,", sz2[j]);
        }
    }
    return 0;
}

