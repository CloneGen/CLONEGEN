void main () {
    int n, a [300], i, m, j;
    double aver, b [300], max = 0, former;
    scanf ("%d", &n);
    aver = 0;
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        aver = aver + a[i];
    }
    aver = aver / n;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1]) {
                m = a[j];
                a[j] = a[j + 1];
                a[j + 1] = m;
            }
    }
    for (i = 0; i < n; i++) {
        b[i] = fabs (a[i] - aver);
    }
    for (i = 0; i < n; i++) {
        if (b[i] > max)
            max = b[i];
    }
    j = 0;
    for (i = 0; i < n; i++) {
        if (b[i] == max) {
            j++;
            if (j == 1) {
                printf ("%d", a[i]);
                former = a[i];
            }
            else {
                if (a[i] != former) {
                    printf (",%d", a[i]);
                    former = a[i];
                }
            }
        }
    }
    printf ("\n");
}

