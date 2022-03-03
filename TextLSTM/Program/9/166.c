int main () {
    int m, n;
    int a [101], b [101];
    char c [101] [11], d [101] [11];
    int i, j, k;
    int ni, nj, nk;
    char ci [11], cj [11], ck [11];
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf ("%s", c[i]);
        strcpy (d[i], c[i]);
        scanf ("%d", &a[i]);
        b[i] = a[i];
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (a[j] < a[j + 1]) {
                ni = a[j + 1];
                a[j + 1] = a[j];
                a[j] = ni;
                strcpy (ci, c[j + 1]);
                strcpy (c[j + 1], c[j]);
                strcpy (c[j], ci);
            }
        }
    }
    for (i = 1; i <= n; i++) {
        if (a[i] >= 60) {
            printf ("%s\n", c[i]);
        }
    }
    for (i = 1; i <= n; i++) {
        if (b[i] < 60) {
            printf ("%s\n", d[i]);
        }
    }
    return 0;
}

