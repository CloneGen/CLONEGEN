int main () {
    int a [1000], n, i, b [1000];
    double c [1000], e, x = 0, y = 0, z;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &b[i]);
    }
    for (i = 0; i < n; i++) {
        c[i] = 0;
    }
    for (i = 0; i < n; i++) {
        if (b[i] >= 90) {
            c[i] = 4.0;
        }
        else {
            if (b[i] < 90 && b[i] >= 85) {
                c[i] = 3.7;
            }
            else {
                if (b[i] < 85 && b[i] >= 82) {
                    c[i] = 3.3;
                }
                else {
                    if (b[i] < 82 && b[i] >= 78) {
                        c[i] = 3.0;
                    }
                    else {
                        if (b[i] < 78 && b[i] >= 75) {
                            c[i] = 2.7;
                        }
                        else {
                            if (b[i] < 75 && b[i] >= 72) {
                                c[i] = 2.3;
                            }
                            else {
                                if (b[i] < 72 && b[i] >= 68) {
                                    c[i] = 2.0;
                                }
                                else {
                                    if (b[i] < 68 && b[i] >= 64) {
                                        c[i] = 1.5;
                                    }
                                    else {
                                        if (b[i] < 64 && b[i] >= 60) {
                                            c[i] = 1.0;
                                        }
                                        else {
                                            if (b[i] < 60) {
                                                c[i] = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        e = c[i] * a[i];
        x += e;
        y += a[i];
    }
    z = x / y;
    printf ("%.2lf\n", z);
    return 0;
}

