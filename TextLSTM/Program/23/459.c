void main () {
    char s [100], word [100] [100];
    int a [100], z [100], i, j = 1, h = 0, x, n;
    gets (s);
    n = strlen (s);
    for (i = 1; i < n; i++) {
        if (s[i] == ' ' && s[i - 1] != ' ') {
            z[h] = i;
            h++;
        };
        if (s[i] != ' ' && s[i - 1] == ' ') {
            a[j] = i;
            j++;
        }
    }
    z[h] = n;
    a[0] = 0;
    for (i = 0; i < h + 1; i++) {
        for (x = 0; x < z[i] - a[i]; x++) {
            word[i][x] = s[a[i] + x];
            word[i][z[i] - a[i]] = '\0';
        }
    }
    printf ("%s", word[h]);
    for (i = h - 1; i >= 0; i--)
        printf (" %s", word[i]);
}

