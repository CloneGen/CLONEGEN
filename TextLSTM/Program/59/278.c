void main () {
    char s [200] [200];
    int n, m, i, j, l, t, k;
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s", s[i]);
    }
    scanf ("%d", &m);
    for (i = 1; i <= m - 1; i++) {
        for (j = 1; j <= n; j++) {
            l = strlen (s[j]);
            for (t = 0; t < l; t++) {
                if (s[j][t] == '@') {
                    if (s[j + 1][t] == '.')
                        s[j + 1][t] = 'a';
                    if (s[j - 1][t] == '.')
                        s[j - 1][t] = 'a';
                    if (s[j][t + 1] == '.')
                        s[j][t + 1] = 'a';
                    if (s[j][t - 1] == '.')
                        s[j][t - 1] = 'a';
                }
            }
        }
        for (j = 1; j <= n; j++) {
            l = strlen (s[j]);
            for (t = 0; t < l; t++) {
                if (s[j][t] == 'a')
                    s[j][t] = '@';
            }
        }
    }
    k = 0;
    for (j = 1; j <= n; j++) {
        l = strlen (s[j]);
        for (t = 0; t < l; t++) {
            if (s[j][t] == '@')
                k++;
        }
    }
    printf ("%d", k);
}

