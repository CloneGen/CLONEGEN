main () {
    int x1, y1, x2, y2, a [100] [100], b [100] [100], c [100] [100], i, j, k;
    scanf ("%d %d", &x1, &y1);
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1 - 1; j++)
            scanf ("%d ", &a[i][j]);
        scanf ("%d", &a[i][j]);
    }
    scanf ("%d %d", &x2, &y2);
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2 - 1; j++)
            scanf ("%d ", &b[i][j]);
        scanf ("%d", &b[i][j]);
    }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            c[i][j] = 0;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            for (k = 0; k < y1; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - 1; j++)
            printf ("%d ", c[i][j]);
        printf ("%d\n", c[i][j]);
    }
}

