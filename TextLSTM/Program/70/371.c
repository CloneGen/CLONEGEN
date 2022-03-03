int main () {
    int n, i, j;
    float distance = 0;
    float x [1024], y [1024], d [1024] [1024], dis [1024] [1024];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            d[i][j] = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
            dis[i][j] = sqrt (d[i][j]);
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if (distance < dis[i][j]) {
                distance = dis[i][j];
            }
        }
    printf ("%.4f\n", distance);
    return 0;
}

