int main () {
    char a [500] = {0}, b [5] = {0}, c [5] = {0};
    int i, j, ping [500] = {0}, n, lon, k, l;
    scanf ("%d", &n);
    scanf ("%s", a);
    lon = strlen (a);
    for (i = 0; i <= lon - n; i++) {
        for (j = 0; j < n; j++) {
            b[j] = a[i + j];
        }
        b[n] = '\0';
        for (k = i; k <= lon - n; k++) {
            for (l = 0; l < n; l++) {
                c[l] = a[k + l];
            }
            c[n] = '\0';
            if (strcmp (b, c) == 0)
                ping[i]++;
        }
    }
    l = 0;
    for (i = 0; i <= lon - n; i++) {
        k = 0;
        for (j = 0; j < n; j++) {
            b[j] = a[i + j];
        }
        b[n] = '\0';
        for (j = 0; j <= lon - n; j++) {
            if (ping[i] < ping[j]) {
                k++;
            }
        }
        if (k == 0) {
            if (ping[i] == 1) {
                printf ("NO");
                break;
            }
            else {
                l++;
                if (l == 1) {
                    printf ("%d\n", ping[i]);
                    printf ("%s\n", b);
                }
                else {
                    printf ("%s\n", b);
                }
            }
        }
    }
    return 0;
}

