main () {
    int m, q, n;
    scanf ("%d %d", &m, &q);
    int **a;
    a = (int **) malloc (m * sizeof (int *));
    for (int i = 0;
    i < m; i++)
        a[i] = (int *) malloc (q * sizeof (int));
    for (int i = 0;
    i < m; i++)
        for (int j = 0;
        j < q; j++)
            scanf ("%d", &a[i][j]);
    scanf ("%d %d", &q, &n);
    int **b;
    b = (int **) malloc (q * sizeof (int *));
    for (int i = 0;
    i < q; i++)
        b[i] = (int *) malloc (n * sizeof (int));
    for (int i = 0;
    i < q; i++)
        for (int j = 0;
        j < n; j++)
            scanf ("%d", &b[i][j]);
    int **c;
    c = (int **) malloc (m * sizeof (int *));
    for (int i = 0;
    i < m; i++)
        c[i] = (int *) malloc (n * sizeof (int));
    for (int i = 0;
    i < m; i++)
        for (int j = 0;
        j < n; j++)
            for (int k = 0;
            k < q; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n - 1; j++)
            printf ("%d ", c[i][j]);
        printf ("%d\n", c[i][j]);
    }
}

