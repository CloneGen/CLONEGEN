int main () {
    int x1, y1, x2, y2, i, j, m;
    int a [101] [101], b [101] [101], c [101] [101] = {0};
    cin >> x1 >> y1;
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (i = 1; i <= x2; i++) {
        for (j = 1; j <= y2; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 1; i <= x1; i++) {
        for (j = 1; j <= y2; j++) {
            for (m = 1; m <= y1; m++) {
                {
                    c[i][j] = c[i][j] + a[i][m] * b[m][j];
                }
            }
            if (j == y2) {
                cout << c[i][j] << endl;
            }
            else {
                cout << c[i][j] << " ";
            }
        }
    }
    return 0;
}

