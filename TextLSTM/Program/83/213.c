int main () {
    int n, n1;
    scanf ("%d", &n);
    double a [2] [11];
    double gpa = 0, gpa1 = 0;
    for (n1 = 1; n1 <= n; n1++) {
        scanf ("%lf", &a[0][n1 - 1]);
    }
    for (n1 = 1; n1 <= n; n1++) {
        scanf ("%lf", &a[1][n1 - 1]);
        if (a[1][n1 - 1] >= 90 && a[1][n1 - 1] <= 100) {
            a[1][n1 - 1] = 4.0 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 85) {
            a[1][n1 - 1] = 3.7 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 82) {
            a[1][n1 - 1] = 3.3 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 78) {
            a[1][n1 - 1] = 3.0 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 75) {
            a[1][n1 - 1] = 2.7 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 72) {
            a[1][n1 - 1] = 2.3 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 68) {
            a[1][n1 - 1] = 2.0 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 64) {
            a[1][n1 - 1] = 1.5 * a[0][n1 - 1];
        }
        else if (a[1][n1 - 1] >= 60) {
            a[1][n1 - 1] = 1.0 * a[0][n1 - 1];
        }
        else
            a[1][n1 - 1] = 0 * a[0][n1 - 1];
        gpa = gpa + a[1][n1 - 1];
        gpa1 = gpa1 + a[0][n1 - 1];
    }
    gpa = gpa / gpa1;
    printf ("%.2lf", gpa);
    return 0;
}

