void main () {
    int n, i;
    double sumcredit = 0, sumgpa = 0;
    double *a, *b;
    scanf ("%d", &n);
    a = (double *) malloc (n * sizeof (double));
    b = (double *) malloc (n * sizeof (double));
    for (i = 0; i < n; i++) {
        scanf ("%lf", (a + i));
        sumcredit = sumcredit + *(a + i);
    }
    for (i = 0; i < n; i++) {
        scanf ("%lf", (b + i));
        if (*(b + i) >= 90 && *(b + i) <= 100) {
            *(b + i) = 4.0 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 85 && *(b + i) <= 89) {
            *(b + i) = 3.7 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 82 && *(b + i) <= 84) {
            *(b + i) = 3.3 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 78 && *(b + i) <= 81) {
            *(b + i) = 3.0 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 75 && *(b + i) <= 77) {
            *(b + i) = 2.7 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 72 && *(b + i) <= 74) {
            *(b + i) = 2.3 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 68 && *(b + i) <= 71) {
            *(b + i) = 2.0 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 64 && *(b + i) <= 67) {
            *(b + i) = 1.5 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) >= 60 && *(b + i) <= 63) {
            *(b + i) = 1.0 * *(a + i);
            sumgpa = sumgpa + *(b + i);
        }
        if (*(b + i) < 60) {
            *(b + i) = 0;
            sumgpa = sumgpa + *(b + i);
        }
    }
    printf ("%.2lf", sumgpa / sumcredit);
}

