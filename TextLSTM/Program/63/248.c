int main () {
    int i, j, x1, y1, x2, y2, a [100] [100], b [100] [100], c [100] [100];
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y1; j++)
            cin >> a[i][j];
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++)
        for (j = 0; j < y2; j++)
            cin >> b[i][j];
    if (y1 != x2) {
        cout << "Input error";
        return 0;
    }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++) {
            int sum = 0;
            for (int k = 0;
            k < y1; k++)
                sum += a[i][k] * b[k][j];
            c[i][j] = sum;
        }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - 1; j++)
            cout << c[i][j] << ' ';
        cout << c[i][y2 - 1] << endl;
    }
    return 0;
}

