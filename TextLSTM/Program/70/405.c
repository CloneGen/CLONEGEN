int main () {
    int i, j, n;
    double max_dis = 0;
    double a [100] [2], dis [100] [100];
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i][0] >> a[i][1];
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            dis[i][j] = sqrt ((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]));
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            if (dis[i][j] > max_dis) {
                max_dis = dis[i][j];
            }
    printf ("%.4f\n", max_dis);
    return 0;
}

