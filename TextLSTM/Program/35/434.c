void main () {
    int i, j, r, c, a [10] [10], rmax [10], cp [10], cmin [10], rn = -1, cn = -1;
    scanf ("%d,%d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        rmax[i] = a[i][0];
        cp[i] = 0;
        for (j = 0; j < c; j++) {
            if (a[i][j] > rmax[i]) {
                rmax[i] = a[i][j];
                cp[i] = j;
            }
        }
    }
    for (j = 0; j < c; j++) {
        cmin[j] = a[0][j];
        for (i = 0; i < r; i++) {
            if (a[i][j] < cmin[j]) {
                cmin[j] = a[i][j];
            }
        }
    }
    for (i = 0; i < r; i++) {
        if (rmax[i] == cmin[cp[i]]) {
            rn = i;
            cn = cp[i];
        }
    }
    if (rn != -1)
        printf ("%d+%d\n", rn, cn);
    else
        printf ("No\n");
}

