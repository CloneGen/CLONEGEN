int main () {
    int n, i;
    scanf ("%d", &n);
    double a, b, c, x1, x2, d, e;
    for (i = 0; i < n; i++) {
        scanf ("%lf %lf %lf", &a, &b, &c);
        d = b * b - 4 * a * c;
        e = (b == 0) ? 0 : (-b) / (2 * a);
        if (d > 0) {
            printf ("x1=%.5lf;x2=%.5lf\n", e + sqrt (d) / (2 * a), e - sqrt (d) / (2 * a));
        }
        else if (d == 0) {
            printf ("x1=x2=%.5lf\n", e);
        }
        else if (e == 0) {
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", -e, sqrt (-d) / (2 * a), -e, sqrt (-d) / (2 * a));
        }
        else {
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", e, sqrt (-d) / (2 * a), e, sqrt (-d) / (2 * a));
        }
    }
    return 0;
}

