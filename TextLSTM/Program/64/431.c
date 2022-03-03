int main () {
    int n, m, i, a, b, *sz, *jd, *wd;
    double *d, c;
    scanf ("%d", &n);
    m = 0;
    for (i = 0; i < n; i++) {
        m += n - 1 - i;
    }
    sz = (int *) malloc (sizeof (int) * 3 * n);
    d = (double *) malloc (sizeof (double) * m);
    jd = (int *) malloc (sizeof (int) * m);
    wd = (int *) malloc (sizeof (int) * m);
    for (i = 0; i < 3 * n; i++) {
        scanf ("%d", &sz[i]);
    }
    i = 0;
    for (a = 0; a < n; a++) {
        for (b = a + 1; b < n; b++) {
            d[i] = sqrt (1.0 * (sz[3 * a + 0] - sz[3 * b + 0]) * (sz[3 * a + 0] - sz[3 * b + 0]) + (sz[3 * a + 1] - sz[3 * b + 1]) * (sz[3 * a + 1] - sz[3 * b + 1]) + (sz[3 * a + 2] - sz[3 * b + 2]) * (sz[3 * a + 2] - sz[3 * b + 2]));
            jd[i] = a;
            wd[i] = b;
            i++;
        }
    }
    for (a = 1; a <= m; a++) {
        for (b = 0; b < m - a; b++) {
            if (d[b] < d[b + 1]) {
                c = d[b];
                d[b] = d[b + 1];
                d[b + 1] = c;
                i = jd[b];
                jd[b] = jd[b + 1];
                jd[b + 1] = i;
                i = wd[b];
                wd[b] = wd[b + 1];
                wd[b + 1] = i;
            }
        }
    }
    for (i = 0; i < m; i++) {
        a = jd[i];
        b = wd[i];
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sz[3 * a + 0], sz[3 * a + 1], sz[3 * a + 2], sz[3 * b + 0], sz[3 * b + 1], sz[3 * b + 2], d[i]);
    }
    free (sz);
    free (d);
    free (jd);
    free (wd);
    return 0;
}

