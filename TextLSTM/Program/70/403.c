int main () {
    int n, i, j;
    double x [10000], y [10000], dis [10000];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    int k = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            dis[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            k = k + 1;
        }
    }
    double max = 0;
    for (k = 1; k <= 10000; k++)
        if (max < dis[k]) {
            max = dis[k];
        }
    printf ("%.4f\n", max);
    return 0;
}

