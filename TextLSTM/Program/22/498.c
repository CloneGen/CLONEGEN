main () {
    int a [301], i = 1, n, t = 0, p = 0, j;
    scanf ("%d", &a[0]);
    while (getchar () != '\n') {
        scanf ("%d", &a[i]);
        i++;
        n = i;
    }
    for (j = 0; j < n; j++)
        for (i = 0; i < n - j - 1; i++)
            if (a[i] < a[i + 1]) {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
    for (i = 0; i < n; i++) {
        if (a[0] > a[i]) {
            printf ("%d\n", a[i]);
            p = 1;
            break;
        }
    }
    if (p == 0)
        printf ("No\n");
}

