int main () {
    int n, i;
    double sum, GPA, temp;
    scanf ("%d", &n);
    int d [n];
    double c [n], b [n], a [n];
    for (i = 1; i <= n; i++) {
        scanf ("%lf", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        scanf ("%d", &d[i]);
    }
    for (i = 1; i <= n; i++) {
        if (d[i] <= 100 && d[i] >= 90) {
            b[i] = 4.0;
        }
        if (d[i] <= 89 && d[i] >= 85) {
            b[i] = 3.7;
        }
        if (d[i] <= 84 && d[i] >= 82) {
            b[i] = 3.3;
        }
        if (d[i] <= 81 && d[i] >= 78) {
            b[i] = 3.0;
        }
        if (d[i] <= 77 && d[i] >= 75) {
            b[i] = 2.7;
        }
        if (d[i] <= 74 && d[i] >= 72) {
            b[i] = 2.3;
        }
        if (d[i] <= 71 && d[i] >= 68) {
            b[i] = 2.0;
        }
        if (d[i] <= 67 && d[i] >= 64) {
            b[i] = 1.5;
        }
        if (d[i] <= 63 && d[i] >= 60) {
            b[i] = 1.0;
        }
        if (d[i] < 60) {
            b[i] = 0;
        }
    }
    for (i = 1; i <= n; i++) {
        c[i] = a[i] * b[i];
    }
    sum = 0;
    temp = 0;
    for (i = 1; i <= n; i++) {
        sum = sum + a[i];
    }
    for (i = 1; i <= n; i++) {
        temp = temp + c[i];
    }
    GPA = temp / sum;
    printf ("%.2lf", GPA);
    return 0;
}

