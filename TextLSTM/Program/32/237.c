void main () {
    char a [800] = {'\0'}, b [800] = {'\0'}, c [800] = {'\0'}, d [800] = {'\0'}, s;
    int i, k, m, n, j, x, y, z;
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%s%s", &a, &b);
        m = strlen (a);
        n = strlen (b);
        if (n < m) {
            for (j = 0; j < m - n; j++)
                c[j] = 48;
            for (j = m - n; j < m; j++)
                c[j] = b[j - m + n];
        }
        else
            strcpy (c, b);
        for (j = m - 1; j >= 0; j--) {
            if (j == 0) {
                d[j] = a[j] - c[j] + 48;
                break;
            }
            if (a[j] >= c[j])
                d[j] = a[j] - c[j] + 48;
            else {
                d[j] = a[j] - c[j] + 58;
                for (z = 1; z <= j; z++) {
                    if (a[j - z] > 48) {
                        a[j - z] = a[j - z] - 1;
                        break;
                    }
                    if (a[j - z] == 48)
                        a[j - z] = 57;
                }
            }
        }
        for (x = 0; x < m; x++)
            if (d[x] != 48) {
                y = x;
                break;
            }
        for (x = y; x < m; x++)
            printf ("%c", d[x]);
        printf ("\n");
    }
}

