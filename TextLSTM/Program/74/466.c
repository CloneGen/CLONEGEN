void main () {
    int m, n, i1, i2 = 0, i3 = 0, mark1, mark2, len, mark3 = 0;
    int a [10];
    int k, x;
    scanf ("%d %d", &m, &n);
    for (k = m; k <= n; k++) {
        mark1 = 1;
        mark2 = 1;
        for (i1 = 2; i1 < k; i1++)
            if (k % i1 == 0) {
                mark1 = 0;
                break;
            }
        if (mark1 != 0) {
            x = k;
            i2 = 0;
            i3 = 0;
            while (x != 0) {
                a[i2] = x % 10;
                x = x / 10;
                i2++;
            }
            len = i2;
            for (; i3 < i2; i3++, i2--) {
                if (a[i2 - 1] != a[i3]) {
                    mark2 = 0;
                    break;
                }
            }
            if (mark2 == 1) {
                if (mark3 == 0) {
                    for (i3 = 0; i3 < len; i3++)
                        printf ("%d", a[i3]);
                    mark3 = 1;
                }
                else {
                    printf (",");
                    for (i3 = 0; i3 < len; i3++)
                        printf ("%d", a[i3]);
                }
            }
        }
    }
    if (mark3 == 0)
        printf ("no\n");
    else
        printf ("\n");
}

