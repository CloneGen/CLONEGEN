void main () {
    int n, i, j, w, k;
    int a [310];
    int b [310];
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    k = 1;
    for (i = 0; i < n; i++) {
        w = 1;
        if (i == 0)
            b[0] = a[0];
        else if (i != 0) {
            for (j = 0; j < i; j++) {
                if (a[j] == a[i])
                    w = 0;
            }
            if (w != 0) {
                b[k] = a[i];
                k++;
            }
        }
    }
    n = k - 1;
    for (i = 0; i < n; i++)
        printf ("%d,", b[i]);
    printf ("%d", b[n]);
}

