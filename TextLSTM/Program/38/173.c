int main () {
    int n, a [100], i, j, s;
    double *b [100], x = 0, y = 0;
    double ans;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        b[i] = (double *) malloc (sizeof (double) * 100);
    }
    for (i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        for (j = 0; j < a[i]; j++) {
            scanf ("%lf", (b[i] + j));
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < a[i]; j++) {
            x = x + (*(b[i] + j));
        }
        x = x / a[i];
        for (j = 0; j < a[i]; j++) {
            y = y + (*(b[i] + j) - x) * (*(b[i] + j) - x);
        }
        y = y / a[i];
        ans = sqrt (y);
        printf ("%.5f\n", ans);
        x = 0;
        y = 0;
    }
}

