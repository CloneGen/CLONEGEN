main () {
    int n, a [20], b [20], i, j;
    scanf ("%d", &n);
    printf ("\n");
    for (i = 1; i <= n; i++) {
        scanf ("%d", &a[i]);
        printf ("\n");
    }
    b[1] = 1, b[2] = 1;
    for (j = 3; j <= 20; j++)
        b[j] = b[j - 1] + b[j - 2];
    for (i = 1; i <= n; i++) {
        printf ("%d\n", b[a[i]]);
        printf ("\n");
    }
    getchar ();
    getchar ();
}

