main () {
    int i, l, b, j, k, x;
    char c [6] [1000], a [6] [1000];
    for (i = 0; i <= 5; i++)
        scanf ("%s", c[i]);
    for (i = 0; i <= 5; i++) {
        l = strlen (c[i]);
        if (l == 1) {
            a[i][0] = c[i][0];
            a[i][1] = '\0';
        }
        else if (c[i][0] < '0' || c[i][0] > '9') {
            b = 1;
            if (l == 2 && c[i][1] == '0') {
                a[i][0] = '0';
                a[i][1] = '\0';
            }
            else
                a[i][0] = c[i][0];
        }
        else
            b = 0;
        for (j = l - 1; j >= b; j--) {
            a[i][b] = c[i][j];
            if (a[i][b] != '0')
                break;
        }
        x = b + 1;
        for (k = j - 1; k >= b; k--) {
            a[i][x] = c[i][k];
            x++;
        }
        a[i][j + 1] = '\0';
        if (i == 0)
            printf ("%s", a[i]);
        else
            printf ("\n%s", a[i]);
    }
    getchar ();
    getchar ();
}

