double dist (double x1, double y1, double x2, double y2) {
    double f;
    f = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return (f);
}

char main () {
    int n, i, j;
    double x [1000], y [1000], ll [1000] [1000] = {{0}, {0}}, l [1000] = {0}, dis = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%lf %lf", &x[i], &y[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            ll[i][j] = dist (x[i], y[i], x[j], y[j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (ll[i][j] > l[i]) {
                l[i] = ll[i][j];
            }
        }
        if (l[i] > dis) {
            dis = l[i];
        }
    }
    printf ("%.4f\n", dis);
}

