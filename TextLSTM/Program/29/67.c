int main () {
    double sum;
    int m, n, k, i;
    cin >> m;
    for (i = 1; i <= m; i++) {
        sum = 0;
        cin >> n;
        float a [n], b [n];
        a[0] = 2;
        a[1] = 3;
        b[0] = 1;
        b[1] = 2;
        for (k = 2; k < n; k++) {
            a[k] = a[k - 1] + a[k - 2];
            b[k] = b[k - 1] + b[k - 2];
        }
        for (k = 0; k < n; k++)
            sum = sum + a[k] / b[k];
        printf ("%.3f", sum);
        printf ("\n");
    }
    return 0;
}

