int main () {
    int n, j, k, l;
    double x0, y0, s = 0, w;
    struct  dian {
        double x, y;
    }
    *d;
    scanf ("%d", &n);
    d = (struct  dian *) malloc (sizeof (dian) * n);
    for (j = 0; j < n; j++) {
        scanf ("%lf%lf", &x0, &y0);
        (d + j)->x = x0;
        (d + j)->y = y0;
    }
    for (l = 0; l < n; l++) {
        for (k = l + 1; k < n; k++) {
            w = ((d + l)->x - (d + k)->x) * ((d + l)->x - (d + k)->x) + ((d + l)->y - (d + k)->y) * ((d + l)->y - (d + k)->y);
            if (s < sqrt (w)) {
                s = sqrt (w);
            }
        }
    }
    printf ("%.4f", s);
    return 0;
}

