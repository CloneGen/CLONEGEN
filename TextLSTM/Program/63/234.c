main () {
    int x1, x2, y1, y2, i, j, k;
    scanf ("%d %d", &x1, &y1);
    int a [100] [100];
    for (i = 0; i <= x1 - 1; i++)
        for (j = 0; j <= y1 - 1; j++)
            scanf ("%d", &a[i][j]);
    scanf ("%d %d", &x2, &y2);
    int b [100] [100];
    for (i = 0; i <= x2 - 1; i++)
        for (j = 0; j <= y2 - 1; j++)
            scanf ("%d", &b[i][j]);
    int c [100] [100];
    for (i = 0; i <= x1 - 1; i++)
        for (j = 0; j <= y2 - 1; j++)
            for (k = 0; k <= y1 - 1; k++)
                c[i][j] += a[i][k] * b[k][j];
    for (i = 0; i <= x1 - 1; i++)
        for (j = 0; j <= y2 - 1; j++) {
            printf ("%d", c[i][j]);
            if (j != (y2 - 1))
                printf (" ");
            if (j == (y2 - 1))
                printf ("\n");
        }
}

