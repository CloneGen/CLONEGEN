main () {
    int per [1000] [2];
    char c;
    int value, temp;
    int i, j, k, m, n;
    int max = 0;
    scanf ("%d", &n);
    c = getchar ();
    for (i = 0; i < n; ++i) {
        value = 0;
        c = getchar () - '0';
        while ((c >= 0) && (c <= 9)) {
            value = value * 10 + c;
            c = getchar () - '0';
        }
        per[i][0] = value;
    }
    for (i = 0; i < n; ++i) {
        value = 0;
        c = getchar () - '0';
        while ((c >= 0) && (c <= 9)) {
            value = value * 10 + c;
            c = getchar () - '0';
        }
        per[i][1] = value;
    }
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < n - i - 1; ++j)
            if (per[j][0] > per[j + 1][0]) {
                temp = per[j][0];
                per[j][0] = per[j + 1][0];
                per[j + 1][0] = temp;
                temp = per[j][1];
                per[j][1] = per[j + 1][1];
                per[j + 1][1] = temp;
            }
    for (i = 0; i < n; ++i) {
        temp = 2000;
        k = 0;
        for (j = 0; j < n - i; ++j)
            if (per[j][1] < temp) {
                k = j;
                temp = per[j][1];
            }
        m = n - i - 1;
        for (j = n - i - 1; j > 0; --j)
            if (per[j][0] >= temp)
                m = j;
        if (max < m)
            max = m;
        for (j = k; j < n - i - 1; ++j) {
            per[j][0] = per[j + 1][0];
            per[j][1] = per[j + 1][1];
        }
    }
    printf ("%d\n", max);
}

