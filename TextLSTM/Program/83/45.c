main () {
    float b [10];
    int a [2] [10];
    float GPA;
    int i, j, n, x = 0;
    scanf ("%d", &n);
    for (i = 0; i < 2; i++)
        for (j = 0; j < n; j++)
            scanf ("%d", &a[i][j]);
    for (j = 0; j < n; j++) {
        if (a[1][j] > 89)
            b[j] = 4.0;
        else if (a[1][j] > 84)
            b[j] = 3.7;
        else if (a[1][j] > 81)
            b[j] = 3.3;
        else if (a[1][j] > 77)
            b[j] = 3.0;
        else if (a[1][j] > 74)
            b[j] = 2.7;
        else if (a[1][j] > 71)
            b[j] = 2.3;
        else if (a[1][j] > 67)
            b[j] = 2.0;
        else if (a[1][j] > 63)
            b[j] = 1.5;
        else if (a[1][j] > 59)
            b[j] = 1.0;
        else
            b[j] = 0;
    }
    GPA = 0;
    for (j = 0; j < n; j++)
        GPA = (double) a[0][j] * b[j] + GPA;
    for (j = 0; j < n; j++)
        x = x + a[0][j];
    GPA = GPA / x;
    printf ("%.2f", GPA);
}

