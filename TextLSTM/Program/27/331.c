void main () {
    int k, n;
    double a [100], b [100], c [100], x1 [100], x2 [100], p [100], q [100], d [100];
    char i = 'i';
    scanf ("%d\n", &n);
    for (k = 1; k <= n; k++) {
        scanf ("%lf%lf%lf\n", &a[k], &b[k], &c[k]);
    }
    for (k = 1; k <= n; k++) {
        d[k] = b[k] * b[k] - 4 * a[k] * c[k];
        if (b[k] != 0) {
            if (d[k] >= 0) {
                if (d[k] > 0) {
                    x1[k] = (-b[k] + sqrt (d[k])) / (2 * a[k]);
                    x2[k] = (-b[k] - sqrt (d[k])) / (2 * a[k]);
                    printf ("x1=%.5lf;x2=%.5lf\n", x1[k], x2[k]);
                }
                else {
                    x1[k] = x2[k] = -b[k] / (2 * a[k]);
                    printf ("x1=x2=%.5lf\n", x1[k], x2[k]);
                }
            }
            else {
                p[k] = (-b[k]) / (2 * a[k]);
                q[k] = sqrt (-d[k]) / (2 * a[k]);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p[k], q[k], p[k], q[k]);
            }
        }
        else {
            if (d[k] >= 0) {
                if (d[k] > 0) {
                    x1[k] = (sqrt (d[k])) / (2 * a[k]);
                    x2[k] = (sqrt (d[k])) / (2 * a[k]);
                    printf ("x1=%.5lf;x2=%.5lf\n", x1[k], x2[k]);
                }
                else {
                    x1[k] = 0;
                    x2[k] = 0;
                    printf ("x1=x2=%.5lf\n", x1[k], x2[k]);
                }
            }
            else {
                q[k] = (sqrt (-d[k])) / (2 * a[k]);
                p[k] = 0;
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", p[k], q[k], p[k], q[k]);
            }
        }
    }
}

