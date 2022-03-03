int main () {
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        double a, b, c;
        cin >> a >> b >> c;
        double x1, x2, deta;
        deta = b * b - 4.0 * a * c;
        if (deta == 0) {
            x1 = (-b) / (2.0 * a);
            if (x1 == -0) {
                x1 = 0;
            }
            printf ("x1=x2=%.5lf\n", x1);
        }
        else if (deta > 0) {
            x1 = (-b + sqrt (deta)) / (2 * a);
            x2 = (-b - sqrt (deta)) / (2 * a);
            if (x1 == -0) {
                x1 = 0;
            }
            if (x2 == -0) {
                x2 = 0;
            }
            printf ("x1=%.5lf;x2=%.5lf\n", x1, x2);
        }
        else {
            double s, x;
            s = (-b) / (2.0 * a);
            x = (sqrt (-deta)) / (2 * a);
            if (s == -0) {
                s = 0;
            }
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", s, x, s, x);
        }
    }
    return 0;
}

