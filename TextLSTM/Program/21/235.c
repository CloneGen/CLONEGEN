void main () {
    int n, a [300], b [300], i, p, k, j = 1, q;
    double s = 0, m = 0, t;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        s = s + a[i];
    }
    s = s / n;
    for (i = 0; i < n; i++) {
        t = fabs (a[i] - s);
        if (t > m) {
            m = t;
            k = i;
            p = 1;
        }
        else if (fabs (t - m) <= 1e-6)
            p++;
    }
    b[0] = a[k];
    if (p == 1)
        printf ("%d", a[k]);
    else {
        for (i = k + 1; i < n; i++)
            if (fabs (fabs (a[i] - s) - m) <= 1e-6) {
                b[j] = a[i];
                j++;
            }
        for (j = 0; j < p; j++) {
            q = j;
            for (i = j + 1; i < p; i++)
                if (b[q] > b[j])
                    q = i;
            b[j] = b[q];
        }
        for (j = 0; j < p; j++) {
            printf ("%d", b[j]);
            if (j < p - 1)
                printf (",");
        }
    }
}

