int main () {
    int a [100] [100], b [100] [100], c [100] [100], x1, y1, x2, y2, i, j, k;
    for (i = 0; i < 100; i++)
        for (j = 0; j < 100; j++)
            a[i][j] = 0, b[i][j] = 0, c[i][j] = 0;
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y1; j++)
            cin >> a[i][j];
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++)
        for (j = 0; j < y2; j++)
            cin >> b[i][j];
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            for (k = 0; k < x2; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            if (j != 0)
                cout << ' ' << c[i][j];
            else
                cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}

