void main () {
    int i, n, s = 0, a [9] = {0}, b [9] = {0};
    float c [9] = {0}, d [9] = {0}, t = 0, m;
    scanf ("%d", &n);
    for (i = 0; i <= n - 1; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i <= n - 1; i++) {
        scanf ("%d", &b[i]);
        if (b[i] < 60) {
            c[i] = 0;
        }
        if (b[i] >= 60 && b[i] < 64) {
            c[i] = 1.0;
        }
        if (b[i] >= 64 && b[i] < 68) {
            c[i] = 1.5;
        }
        if (b[i] >= 68 && b[i] < 72) {
            c[i] = 2.0;
        }
        if (b[i] >= 72 && b[i] < 75) {
            c[i] = 2.3;
        }
        if (b[i] >= 75 && b[i] < 78) {
            c[i] = 2.7;
        }
        if (b[i] >= 78 && b[i] < 82) {
            c[i] = 3.0;
        }
        if (b[i] >= 82 && b[i] < 85) {
            c[i] = 3.3;
        }
        if (b[i] >= 85 && b[i] < 90) {
            c[i] = 3.7;
        }
        if (b[i] >= 90) {
            c[i] = 4;
        }
    }
    for (i = 0; i <= n - 1; i++) {
        d[i] = a[i] * c[i];
        t = t + d[i];
        s = s + a[i];
    }
    m = t / s;
    printf ("%.2f", m);
}

