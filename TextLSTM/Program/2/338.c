void main () {
    int i, j, n, m, x [26] = {0}, y = 0, z;
    char a [100] [4], b [100] [10], c;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %s", a[i], b[i]);
    }
    for (i = 0; i < n; i++) {
        m = strlen (b[i]);
        for (j = 0; j < m; j++) {
            x[b[i][j] - 65]++;
        }
    }
    for (i = 0; i < 26; i++) {
        if (y < x[i]) {
            y = x[i];
            z = i;
        }
    }
    c = z + 65;
    printf ("%c\n%d\n", c, y);
    for (i = 0; i < n; i++) {
        m = strlen (b[i]);
        y = 0;
        for (j = 0; j < m; j++) {
            if (b[i][j] == c)
                y = 1;
        }
        if (y == 1)
            printf ("%s\n", a[i]);
    }
}

