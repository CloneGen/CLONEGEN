void main () {
    float a [300], b [300];
    int c [300];
    float sum = 0, max;
    int i, j, n, m = 0;
    int k;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%f", &a[i]);
        sum = sum + a[i];
    }
    sum = sum / n;
    for (i = 0; i < n; i++) {
        b[i] = a[i] - sum;
        if (b[i] < 0)
            b[i] = 0 - b[i];
    }
    max = b[0];
    for (i = 0; i < n; i++) {
        if (b[i] > max)
            max = b[i];
    }
    for (i = 0; i < n; i++) {
        if (b[i] == max) {
            c[m] = (int) a[i];
            m++;
        }
    }
    for (i = 0; i < m; i++)
        for (j = i + 1; j < m; j++) {
            if (c[i] > c[j]) {
                k = c[j];
                c[j] = c[i];
                c[i] = k;
            }
        }
    for (i = 0; i < m - 1; i++)
        printf ("%d,", c[i]);
    printf ("%d", c[m - 1]);
}

