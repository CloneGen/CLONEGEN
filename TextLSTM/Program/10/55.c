main () {
    int i, j, k, n, height = 9999;
    scanf ("%d", &n);
    int *a = (int *) malloc (n * sizeof (int));
    int **b = (int **) malloc (n * sizeof (int *));
    for (i = 0; i <= n - 1; i++)
        b[i] = (int *) malloc (9999 * sizeof (int));
    for (i = 0; i <= n - 1; i++)
        scanf ("%d", &a[i]);
    for (i = 0; i <= n - 2; i++) {
        if (a[i] > a[i + 1]) {
            k = a[i];
            a[i] = a[i + 1];
            a[i + 1] = k;
        }
    }
    height = a[n - 1];
    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= height; j++) {
            if (i == n - 1) {
                if (j >= a[i]) {
                    b[i][j] = 1;
                }
                else
                    b[i][j] = 0;
            }
            else {
                if (j >= a[i]) {
                    if (1 + b[i + 1][a[i]] > b[i + 1][j]) {
                        b[i][j] = 1 + b[i + 1][a[i]];
                    }
                    else
                        b[i][j] = b[i + 1][j];
                }
                else
                    b[i][j] = b[i + 1][j];
            }
        }
    }
    printf ("%d", b[0][height] + 1);
}

