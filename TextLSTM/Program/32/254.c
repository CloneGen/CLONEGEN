void main () {
    char a [10000], b [10000], c [10000];
    int d, i, n, j, m, t, s, w;
    scanf ("%d", &w);
    for (j = 0; j < w; j++) {
        scanf ("%s", a);
        scanf ("%s", b);
        for (n = 1; a[n] != '\0';)
            n++;
        for (m = 1; b[m] != '\0';)
            m++;
        d = n - m;
        for (i = m - 1; i >= 0; i--)
            b[i + d] = b[i];
        for (i = 0; i < n - m; i++)
            b[i] = '0';
        for (i = n - 1; i >= n - m; i--) {
            t = a[i] - b[i];
            if (t < 0) {
                t = 10 + a[i] - b[i];
                a[i - 1] = a[i - 1] - 1;
            }
            c[i] = t + '0';
            s = i - 1;
            while (a[s] < '0') {
                a[s] = a[s] + 10;
                a[s - 1] = a[s - 1] - 1;
                s--;
            }
        }
        for (i = 0; i < n - m; i++)
            c[i] = a[i];
        for (i = 0; i < n; i++)
            printf ("%c", c[i]);
        printf ("\n");
    }
}

