main () {
    int a [1001], b [1001], c [1001], j, k, l, i, n, m, win;
    scanf ("%d", &n);
    while (n > 0) {
        for (i = 1; i <= n; i++) {
            scanf ("%d", &c[i]);
            j = i;
            while (j > 1 && c[j] > c[j / 2]) {
                k = c[j];
                c[j] = c[j / 2];
                c[j / 2] = k;
                j = j / 2;
            }
        }
        m = n;
        for (i = 1; i <= n; i++) {
            a[i] = c[1];
            c[1] = c[m];
            m--;
            j = 1;
            while ((c[j] < c[j * 2 + 1] || c[j] < c[j * 2]) && j <= m / 2) {
                k = c[j * 2] > c[j * 2 + 1] ? j * 2 : j * 2 + 1;
                l = c[j];
                c[j] = c[k];
                c[k] = l;
                j = k;
            }
        }
        for (i = 1; i <= n; i++) {
            scanf ("%d", &c[i]);
            j = i;
            while (j > 1 && c[j] > c[j / 2]) {
                k = c[j];
                c[j] = c[j / 2];
                c[j / 2] = k;
                j = j / 2;
            }
        }
        m = n;
        for (i = 1; i <= n; i++) {
            b[i] = c[1];
            c[1] = c[m];
            m--;
            j = 1;
            while ((c[j] < c[j * 2 + 1] || c[j] < c[j * 2]) && j <= m / 2) {
                k = c[j * 2] > c[j * 2 + 1] ? j * 2 : j * 2 + 1;
                l = c[j];
                c[j] = c[k];
                c[k] = l;
                j = k;
            }
        }
        i = 1;
        j = n;
        k = 1;
        l = n;
        win = 0;
        while (i <= j) {
            while (a[i] > b[k] && i <= j) {
                i++;
                k++;
                win++;
            }
            while (a[j] > b[l] && i <= j) {
                j--;
                l--;
                win++;
            }
            if (i <= j) {
                if (a[j] < b[k])
                    win--;
                j--;
                k++;
            }
        }
        printf ("%d\n", win * 200);
        scanf ("%d", &n);
    }
}

