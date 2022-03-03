double fangcha (double *pi, int n) {
    int i;
    double *pa;
    pa = pi;
    double sum = 0, ave;
    for (i = 0; i < n; i++) {
        sum += *pi;
        pi++;
    }
    ave = sum / n;
    double s = 0;
    for (i = 0; i < n; i++) {
        s += ((*pa - ave) * (*pa - ave));
        *pa++;
    }
    s = s / (double) n;
    s = sqrt (s);
    return s;
}

int main () {
    int k, i, j;
    double x [100] [100];
    int b [100];
    double xx [100];
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d", &b[i]);
        for (j = 0; j < b[i]; j++) {
            scanf ("%lf", &x[i][j]);
        }
    }
    double *pi;
    for (i = 0; i < k; i++) {
        pi = &x[i][0];
        xx[i] = fangcha (pi, b[i]);
        printf ("%.5f\n", xx[i]);
    }
    return 0;
}

