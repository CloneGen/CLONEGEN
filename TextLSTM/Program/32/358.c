main () {
    char a [10] [100], b [10] [100];
    int i, j, n, k, l = 0;
    scanf ("%d", &n);
    getchar ();
    for (i = 0; i < n - 1; i++) {
        gets (a [i]);
        gets (b [i]);
        getchar ();
    }
    gets (a [n - 1]);
    gets (b [n - 1]);
    for (i = 0; i < n; i++) {
        k = strlen (a[i]);
        l = strlen (b[i]);
        for (j = 0; j < l; j++) {
            if (a[i][k - j - 1] < b[i][l - j - 1]) {
                a[i][k - j - 1] = a[i][k - j - 1] + 10 - b[i][l - j - 1] + '1' - 1;
                a[i][k - j - 2]--;
            }
            else
                a[i][k - j - 1] = a[i][k - j - 1] - b[i][l - j - 1] + '1' - 1;
        }
        for (j = 0; j < k; j++)
            printf ("%c", a[i][j]);
        printf ("\n");
    }
}

