void main () {
    char s [1000] [1000], t [1000], str [1000];
    int a [1000], i, j, m, n, k, l, max, x, b;
    scanf ("%d\n", &n);
    gets (str);
    m = strlen (str);
    k = 0;
    for (i = 0; i < m - n + 1; i++) {
        for (j = 0; j < 1000; j++)
            t[j] = 0;
        for (j = 0; j < n; j++)
            t[j] = str[i + j];
        l = 0;
        for (j = 1; j <= k; j++) {
            x = 0;
            for (b = 0; b < n; b++)
                if (t[b] != s[j][b])
                    x = 1;
            if (x == 0) {
                l = 1;
                a[j]++;
            }
        }
        if (l == 0) {
            k++;
            for (j = 0; j < n; j++)
                s[k][j] = t[j];
            for (j = n; j < 1000; j++)
                s[k][j] = 0;
            a[k] = 1;
        }
    }
    max = 0;
    for (i = 1; i <= k; i++)
        if (a[i] > max)
            max = a[i];
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 1; i <= k; i++)
            if (a[i] == max)
                puts (s[i]);
    }
}

