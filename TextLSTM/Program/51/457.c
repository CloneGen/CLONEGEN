main () {
    char c [501] = {'\0'}, ch [501] [6] = {{'\0'}};
    int a [500] = {0}, i, j, n, len, max;
    scanf ("%d", &n);
    getchar ();
    gets (c);
    len = strlen (c);
    for (i = 0; i < len + 1 - n; i++) {
        for (j = 0; j < n; j++) {
            ch[i][j] = c[i + j];
        }
    }
    for (i = 0; i < len + 1 - n; i++) {
        if (ch[i][0] == '\0')
            continue;
        for (j = 0; j < len + 1 - n; j++) {
            if (j == i)
                continue;
            else {
                if (!strcmp (ch[i], ch[j])) {
                    a[i]++;
                    ch[j][0] = '\0';
                }
            }
        }
    }
    max = a[0];
    for (i = 1; i < len + 1 - n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    if (max != 0) {
        printf ("%d\n", max + 1);
        for (i = 0; i < len + 1 - n; i++) {
            if (a[i] == max)
                puts (ch[i]);
        }
    }
    else
        printf ("NO\n");
    return 0;
}

