int main () {
    char s [1000] = {0};
    gets (s);
    int n, m, b = 1, i, j, k = 0;
    n = strlen (s);
    char a [50] [50] = {0};
    for (i = 0; k < n; i++) {
        for (j = 0; b = 0 || k < n; j++) {
            m = i;
            k++;
            if (s[k - 1] == ' ') {
                b = 0;
            }
            if (b != 0) {
                a[i][j] = s[k - 1];
            }
            else
                break;
        }
    }
    int c = 0, d = 0;
    for (i = 0; i < m; i++) {
        if (strlen (a[c]) < strlen (a[i + 1]))
            c = i + 1;
        if (strlen (a[d]) > strlen (a[i + 1]))
            d = i + 1;
    }
    printf ("%s\n%s\n", a[c], a[d]);
    return 0;
}

