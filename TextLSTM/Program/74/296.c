void main () {
    int flag, e, m, n, i, j, a [100], s, k, count = 0;
    scanf ("%d%d", &m, &n);
    for (k = m; k <= n; k++) {
        i = k;
        flag = 0;
        e = i;
        for (j = 0; i != 0; i = i / 10) {
            j = 10 * j;
            j += i % 10;
        }
        if (e == j) {
            for (s = 2; s <= e / 2; s++) {
                if (e % s == 0) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                a[count] = k;
                count++;
            }
        }
    }
    if (count == 0) {
        printf ("no");
    }
    if (count != 0) {
        printf ("%d", a[0]);
        for (i = 1; i < count; i++) {
            printf (",%d", a[i]);
        }
    }
}

