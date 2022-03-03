int main () {
    int n;
    cin >> n;
    double x [100], y [100];
    double dis = 0.0000, distemp = 0.0000;
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        if (i > 0) {
            for (j = 0; j < i; j++) {
                distemp = sqrt ((x[j] - x[i]) * (x[j] - x[i]) + (y[j] - y[i]) * (y[j] - y[i]));
                if (distemp > dis)
                    dis = distemp;
            }
        }
    }
    printf ("%.4f\n", dis);
    return 0;
}

