main () {
    int i, j, n, c [500], p, max, count = 0;
    char a [500], b [500] [5];
    scanf ("%d\n", &n);
    max = 0;
    for (i = 0; i < 500; i++) {
        a[i] = '\0';
        c[i] = 0;
        for (j = 0; j < 5; j++) {
            b[i][j] = '\0';
        }
    }
    gets (a);
    for (i = 0; i < 500; i++) {
        if (a[i] == '\0')
            break;
        else
            count++;
    }
    for (i = 0; i <= count - n; i++) {
        for (j = 0; j < n; j++) {
            b[i][j] = a[i + j];
        }
    }
    for (i = 0; i < count - n; i++) {
        for (j = 0; j <= count - n; j++) {
            p = strcmp (b[i], b[i + j]);
            if (p == 0)
                c[i]++;
        }
    }
    for (i = 0; i < 101; i++) {
        if (max <= c[i])
            max = c[i];
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 0; i < 200; i++) {
            if (c[i] == max) {
                printf ("%s\n", b[i]);
            }
        }
    }
}

