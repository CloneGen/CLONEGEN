int main () {
    int a [100] [100], b [100] [100], c [100] [100] = {0};
    int m, n, x1, x2, y1, y2, k;
    cin >> x1 >> y1;
    for (m = 0; m < x1; m++) {
        for (n = 0; n < y1; n++) {
            cin >> a[m][n];
        }
    }
    cin >> x2 >> y2;
    for (m = 0; m < x2; m++) {
        for (n = 0; n < y2; n++) {
            cin >> b[m][n];
        }
    }
    for (m = 0; m < 100; m++)
        for (n = 0; n < 100; n++)
            for (k = 0; k < y1; k++) {
                c[m][n] += a[m][k] * b[k][n];
            }
    for (m = 0; m < x1; m++) {
        for (n = 0; n < y2; n += 1) {
            cout << c[m][n];
            if (n < y2 - 1)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}

