int main () {
    int i, j, k = 0, l, b [1000], d [1000], e [1000], m, n;
    char a [1000], c [1000];
    scanf ("%s", a);
    l = strlen (a);
    if (l == 1)
        printf ("%d\n%d", 0, a[0] - '0');
    else if (l == 2) {
        m = a[0] - '0';
        n = a[1] - '0';
        if (m * 10 + n < 13)
            printf ("%d\n%d", 0, m * 10 + n);
        else
            printf ("%d\n%d", (m * 10 + n) / 13, (m * 10 + n) % 13);
    }
    else {
        for (i = 0; i < l; i++) {
            e[i] = a[i] - '0';
        }
        if (e[0] * 10 + e[1] < 13) {
            b[k] = (e[0] * 100 + e[1] * 10 + e[2]) / 13;
            d[k] = (e[0] * 100 + e[1] * 10 + e[2]) % 13;
            for (i = 3; i < l; i++) {
                b[k + 1] = (d[k] * 10 + e[i]) / 13;
                d[k + 1] = (d[k] * 10 + e[i]) % 13;
                k = k + 1;
            }
            for (j = 0; j <= k; j++) {
                c[j] = b[j] + '0';
            }
            c[l - 2] = '\0';
            printf ("%s\n%d", c, d[k]);
        }
        else {
            b[k] = (e[0] * 10 + e[1]) / 13;
            d[k] = (e[0] * 10 + e[1]) % 13;
            for (i = 2; i < l; i++) {
                b[k + 1] = (d[k] * 10 + e[i]) / 13;
                d[k + 1] = (d[k] * 10 + e[i]) % 13;
                k = k + 1;
            }
            for (j = 0; j <= k; j++) {
                c[j] = b[j] + '0';
            }
            c[l - 1] = '\0';
            printf ("%s\n%d", c, d[k]);
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

