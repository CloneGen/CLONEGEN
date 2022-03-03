int main () {
    int n, k, i, j, k1;
    double S, sum;
    double *p;
    double x [1000];
    scanf ("%d", &n);
    for (j = 0; j < n; j++) {
        sum = 0;
        S = 0;
        scanf ("%d", &k);
        p = &x[0];
        for (i = 0; i < k; i++, p++) {
            scanf ("%lf", p);
        }
        p = &x[0];
        for (i = 0; i < k; i++, p++) {
            sum = sum + *p;
        }
        sum = sum / k;
        p = &x[0];
        for (i = 0; i < k; i++, p++) {
            S = S +(*p - sum) * (*p - sum);
        }
        S = S / k;
        S = sqrt (S);
        printf ("%.5f\n", S);
        p = &x[0];
        for (i = 0; i < k; i++, p++) {
            *p = 0;
        }
    }
    return 0;
}

