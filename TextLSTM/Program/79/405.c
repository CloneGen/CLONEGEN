void main () {
    int c, n, m, i, j = 1, k, t, a [300], b [300] [2];
    for (c = 0; c < 300; c++) {
        scanf ("%d%d", &b[c][0], &b[c][1]);
        if (b[c][0] == 0 && b[c][1] == 0)
            break;
    }
    for (c = 0; c < 300; c++) {
        if (b[c][0] == 0 && b[c][1] == 0)
            break;
        n = b[c][0];
        m = b[c][1];
        for (t = 0; t < n; t++)
            a[t] = t + 1;
        for (i = n; i > 1; i--) {
            for (t = 0; t < n; t++) {
                if (a[t] == m % i && (m % i) != 0) {
                    a[t] = -1;
                    break;
                }
                else if (a[t] == i && (m % i) == 0) {
                    a[t] = -1;
                    break;
                }
            }
            for (k = t + 1; k < n; k++) {
                if (a[k] != -1) {
                    a[k] = j;
                    j++;
                }
            }
            for (k = 0; k < t; k++) {
                if (a[k] != -1) {
                    a[k] = j;
                    j++;
                }
            }
            j = 1;
        }
        for (k = 0; k < n; k++)
            if (a[k] != -1) {
                printf ("%d\n", k + 1);
                break;
            }
    }
}

