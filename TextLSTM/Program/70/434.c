void main () {
    int n, i, j;
    double max, a;
    double x [10], y [10], s [10];
    double f (double, double, double, double);
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%lf%lf", &x[i], &y[i]);
    }
    for (i = 0; i < n - 1; i++) {
        s[i] = f (x[i], y[i], x[i + 1], y[i + 1]);
        if (i < n - 2) {
            for (j = i + 2; j < n; j++) {
                a = f (x[i], y[i], x[j], y[j]);
                if (s[i] < a)
                    s[i] = a;
            }
        }
    }
    max = s[0];
    for (i = 1; i < n; i++) {
        if (max < s[i])
            max = s[i];
    }
    printf ("%.4f\n", max);
}

double f (double x1, double y1, double x2, double y2) {
    double z;
    z = sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return z;
}

