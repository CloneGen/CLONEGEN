int change (char a [], int n) {
    int i;
    int s = 0;
    for (i = 0; i <= n - 1; i++) {
        s = s * 10 + a[i] - '0';
    }
    return (s);
}

main () {
    int n = 0, i = 0, j = 0, k;
    char s1 [10000], s2 [10000], x1 [1000] [1000], y1 [1000] [1000];
    int x [1000], y [1000], xl [1000], yl [1000], num [1000] = {0};
    gets (s1);
    gets (s2);
    for (k = 0; k <= strlen (s1) - 1; k++) {
        if (s1[k] != ',') {
            x1[i][j] = s1[k];
            j++;
        }
        else {
            xl[i] = j;
            i++;
            j = 0;
        }
    }
    if (k == strlen (s1)) {
        xl[i] = j;
        i++;
    }
    n = i;
    j = 0;
    i = 0;
    for (k = 0; k <= strlen (s2) - 1; k++) {
        if (s2[k] != ',') {
            y1[i][j] = s2[k];
            j++;
        }
        else {
            yl[i] = j;
            i++;
            j = 0;
        }
    }
    if (k == strlen (s2)) {
        yl[i] = j;
        i++;
    }
    for (i = 0; i <= n - 1; i++) {
        x[i] = change (x1[i], xl[i]);
        y[i] = change (y1[i], yl[i]);
    }
    for (i = 0; i < 1000; i++) {
        num[i] = 0;
    }
    for (i = 0; i < 1000; i++) {
        for (j = 0; j <= n - 1; j++) {
            if (i >= x[j] && i < y[j]) {
                num[i]++;
            }
        }
    }
    k = 0;
    for (i = 0; i < 1000; i++) {
        if (num[i] >= k) {
            k = num[i];
        }
    }
    printf ("%d %d", n, k);
}

