int main () {
    int a [10] [3] = {0};
    double b [45] = {0};
    int biaoji [45] [2] = {0};
    int n = 0, i = 0, j = 0, k = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < 3; j++)
            cin >> a[i][j];
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            b[k] = sqrt ((double) (a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][1] - a[j][1]) * (a[i][1] - a[j][1]) + (a[i][2] - a[j][2]) * (a[i][2] - a[j][2]));
            biaoji[k][0] = i;
            biaoji[k][1] = j;
            k++;
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++) {
        for (j = 0; j < n * (n - 1) / 2 - i - 1; j++) {
            if (b[j + 1] - b[j] > 1e-4) {
                double temp;
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
                int tempx;
                tempx = biaoji[j][0];
                biaoji[j][0] = biaoji[j + 1][0];
                biaoji[j + 1][0] = tempx;
                tempx = biaoji[j][1];
                biaoji[j][1] = biaoji[j + 1][1];
                biaoji[j + 1][1] = tempx;
            }
        }
    }
    for (i = 0; i < n * (n - 1) / 2; i++)
        cout << "(" << a[biaoji[i][0]][0] << "," << a[biaoji[i][0]][1] << "," << a[biaoji[i][0]][2] << ")-(" << a[biaoji[i][1]][0] << "," << a[biaoji[i][1]][1] << "," << a[biaoji[i][1]][2] << ")=" << fixed << setprecision (2) << b[i] << endl;
    return 0;
}

