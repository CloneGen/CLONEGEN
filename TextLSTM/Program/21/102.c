void main () {
    int a [400], i, j, n, l, s = 0, t = 0, r;
    float x, z;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        s = s + a[i];
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                l = a[i];
                a[i] = a[j];
                a[j] = l;
            }
        }
    }
    x = (float) s / (float) n;
    z = (float) a[0] + (float) a[n - 1] - 2 * x;
    if (z < 0.001 && z > -0.001) {
        for (i = 0; i < n; i++) {
            if (a[i] == a[0] || a[i] == a[n - 1]) {
                if (t == 1)
                    printf (",");
                printf ("%d", a[i]);
                t = 1;
            }
        }
    }
    else {
        t = 0;
        r = z > 0 ? a[n - 1] : a[0];
        for (i = 0; i < n; i++) {
            if (a[i] == r) {
                if (t == 1)
                    printf (",");
                printf ("%d", a[i]);
                t = 1;
            }
        }
    }
}

