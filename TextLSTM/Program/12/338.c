void main () {
    int t, i, j, x, y, m, n, a [20];
    for (j = 1; j <= 15; j++) {
        t = 0;
        scanf ("%d", &y);
        if (y == -1)
            break;
        else {
            a[0] = y;
            for (i = 1; i <= 20; i++) {
                scanf ("%d", &x);
                if (x == 0)
                    break;
                else {
                    a[i] = x;
                }
            }
            for (m = 0; m <= i - 1; m++) {
                for (n = 0; n <= i - 1; n++) {
                    if (a[m] == 2 * a[n])
                        t++;
                }
            }
            printf ("%d\n", t);
        }
    }
}

