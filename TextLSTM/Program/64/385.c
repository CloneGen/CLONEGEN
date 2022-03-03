int main () {
    float point [10] [3], lon [100], tem1;
    int n, i, j, sum = 0, x [100], y [100], tem;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> point[i][0] >> point[i][1] >> point[i][2];
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++) {
            lon[sum] = sqrt ((point[i][0] - point[j][0]) * (point[i][0] - point[j][0]) + (point[i][1] - point[j][1]) * (point[i][1] - point[j][1]) + (point[i][2] - point[j][2]) * (point[i][2] - point[j][2]));
            x[sum] = i;
            y[sum++] = j;
        }
    for (i = 0; i < sum - 1; i++)
        for (j = 0; j < sum - i - 1; j++) {
            if (lon[j] < lon[j + 1]) {
                tem1 = lon[j];
                lon[j] = lon[j + 1];
                lon[j + 1] = tem1;
                tem = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tem;
                tem = y[j];
                y[j] = y[j + 1];
                y[j + 1] = tem;
            }
        }
    for (i = 0; i < sum; i++) {
        cout << '(';
        cout << point[x[i]][0] << ',' << point[x[i]][1] << ',' << point[x[i]][2] << ')';
        cout << '-';
        cout << '(';
        cout << point[y[i]][0] << ',' << point[y[i]][1] << ',' << point[y[i]][2] << ')';
        cout << '=';
        printf ("%.2f", lon[i]);
        cout << endl;
    }
}

