int main () {
    int x1, y1, x2, y2, a [100] [100], b [100] [100], tmp = 0;
    cin >> x1 >> y1;
    for (int i = 0;
    i <= x1 - 1; i++) {
        for (int j = 0;
        j <= y1 - 1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (int i = 0;
    i <= x2 - 1; i++) {
        for (int j = 0;
        j <= y2 - 1; j++) {
            cin >> b[i][j];
        }
    }
    for (int k = 0;
    k <= x1 - 1; k++) {
        for (int l = 0;
        l <= y2 - 2; l++) {
            for (int m = 0;
            m <= y1 - 1; m++) {
                tmp += (a[k][m] * b[m][l]);
            }
            cout << tmp << ' ';
            tmp = 0;
        }
        for (int m = 0;
        m <= y1 - 1; m++) {
            tmp += (a[k][m] * b[m][y2 - 1]);
        }
        cout << tmp << endl;
        tmp = 0;
    }
    return 0;
}

