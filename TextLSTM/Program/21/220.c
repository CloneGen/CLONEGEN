main () {
    int a [300], n, i, sum = 0, b [300] = {0}, j = 0, en, d;
    float x, max;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        sum = sum + a[i];
    }
    x = sum / (float) (n);
    max = fabs (x - (float) (a[0]));
    b[j] = a[0];
    for (i = 1; i < n; i++) {
        if (fabs (x - (float) (a[i])) == max) {
            j++;
            b[j] = a[i];
        }
        else if (fabs (x - (float) (a[i])) > max) {
            max = fabs (x - (float) (a[i]));
            j = 0;
            b[j] = a[i];
            for (d = 1; d < 300; d++)
                b[d] = 0;
        }
    }
    for (i = 0; b[i] != 0; i++) {
        for (j = i; b[j] != 0; j++) {
            if (b[i] > b[j]) {
                en = b[i];
                b[i] = b[j];
                b[j] = en;
            }
        }
    }
    printf ("%d", b[0]);
    for (i = 1; b[i] != 0; i++)
        printf (",%d", b[i]);
}

