main () {
    int a [16], i, j, k, n, x, y;
    for (;;) {
        j = 0, n = 0;
        scanf ("%d", &a[0]);
        if (a[0] == -1)
            break;
        for (i = 1; i < 16; i++) {
            scanf ("%d", &a[i]);
            j++;
            if (a[i] == 0)
                break;
        }
        for (i = 0; i < j; i++) {
            for (k = i + 1; k < j; k++) {
                x = a[i] % a[k];
                y = a[i] / a[k];
                if ((x == 0) && (y == 2))
                    n++;
            }
        }
        for (i = j - 1; i >= 0; i--) {
            for (k = i - 1; k >= 0; k--) {
                x = a[i] % a[k];
                y = a[i] / a[k];
                if ((x == 0) && (y == 2))
                    n++;
            }
        }
        printf ("%d\n", n);
    }
    return 0;
}

