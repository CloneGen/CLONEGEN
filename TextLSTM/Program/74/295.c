void main () {
    int m, n, i, j, k, l = 0, p, temp1 = 0, temp2 = 0;
    int result [9999];
    char a [100];
    scanf ("%d%d", &m, &n);
    for (i = m; i <= n; i++) {
        if (i != 2)
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    temp1 = 1;
                    break;
                }
            }
        if (temp1 == 0) {
            p = i;
            for (j = 0; p >= 10; j++) {
                a[j] = p % 10;
                p = p / 10;
            }
            a[j] = p;
            for (k = 0; k <= j; k++) {
                if (a[k] != a[j - k]) {
                    temp2 = 1;
                    break;
                }
            }
            if (temp2 == 0) {
                result[l] = i;
                l++;
            }
        }
        temp1 = 0;
        temp2 = 0;
    }
    if (l == 0)
        printf ("no");
    else {
        for (i = 0; i < l - 1; i++) {
            printf ("%d,", result[i]);
        }
        printf ("%d", result[l - 1]);
    }
}

