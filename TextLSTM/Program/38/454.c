void main () {
    int k, n, i, j;
    double S;
    double sum, average, result;
    double (*p) [1000];
    p = (double *) calloc (100, 1000 * sizeof (double));
    scanf ("%d", &k);
    for (i = 0; i < k; i++) {
        scanf ("%d", &n);
        sum = 0;
        for (j = 0; j < n; j++) {
            scanf ("%lf", (*(p + i) + j));
            sum = sum + *(*(p + i) + j);
        }
        average = sum / n;
        for (j = 0, result = 0; j < n; j++) {
            result = result + (*(*(p + i) + j) - average) * (*(*(p + i) + j) - average);
        }
        S = sqrt (result / n);
        printf ("%.5f\n", S);
    }
}

