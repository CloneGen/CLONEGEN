int main () {
    int i, j;
    double n, x [100], y [100], m, max;
    cin >> n;
    max = 0;
    for (i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    for (i = 0; i < n;) {
        for (j = 0; j < n;) {
            m = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            if (m >= max)
                max = m;
            j++;
        };
        i++;
    };
    printf ("%.4f\n", max);
    return 0;
}

