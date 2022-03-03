void main () {
    int n, g;
    scanf ("%d", &n);
    double a [100], b [100], c [100], x1, x2, disc, rp, ip;
    for (g = 0; g <= n - 1; g++) {
        scanf ("%lf%lf%lf", &a[g], &b[g], &c[g]);
    }
    for (g = 0; g <= n - 1; g++) {
        disc = b[g] * b[g] - 4 * a[g] * c[g];
        if (fabs (disc) <= 1e-6) {
            printf ("x1=x2=%.5lf\n", -b[g] / (2 * a[g]));
        }
        else if (disc > 1e-6) {
            x1 = (-b[g] + sqrt (disc)) / (2 * a[g]);
            x2 = (-b[g] - sqrt (disc)) / (2 * a[g]);
            printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
        }
        else {
            if (b[g] == 0) {
                rp = 0;
                ip = sqrt (-disc) / (2 * a[g]);
                printf ("x1=%.5lf+%.5lfi;", rp, ip);
                printf ("x2=%.5lf-%.5lfi\n", rp, ip);
            }
            else {
                rp = -b[g] / (2 * a[g]);
                ip = sqrt (-disc) / (2 * a[g]);
                printf ("x1=%.5lf+%.5lfi;", rp, ip);
                printf ("x2=%.5lf-%.5lfi\n", rp, ip);
            }
        }
    }
}

