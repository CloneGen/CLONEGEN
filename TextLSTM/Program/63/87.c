int main () {
    int x1, y1, x2, y2, a [101] [101], b [101] [101], c [101] [101], i, j, m;
    cin >> x1 >> y1;
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y1; j++)
            cin >> a[i][j];
    }
    cin >> x2 >> y2;
    for (i = 1; i <= x2; i++) {
        for (j = 1; j <= y2; j++)
            cin >> b[i][j];
    }
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y2; j++) {
            c[i][j] = 0;
            for (m = 1; m <= y1; m++)
                c[i][j] = a[i][m] * b[m][j] + c[i][j];
        }
    }
    for (i = 1; i <= x1; i++) {
        for (j = 1; j < y2; j++)
            cout << c[i][j] << " ";
        cout << c[i][y2] << endl;
    }
    return 0;
}

