int main () {
    int a [100] [100] = {0};
    int b [100] [100] = {0};
    int c [100] [100] = {0};
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    for (int i = 0;
    i < x1; i++) {
        for (int j = 0;
        j < y1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (int i = 0;
    i < x2; i++) {
        for (int j = 0;
        j < y2; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0;
    i < x1; i++) {
        for (int j = 0;
        j < y2; j++) {
            for (int k = 0;
            k < x2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0;
    i < x1; i++) {
        for (int j = 0;
        j < y2; j++) {
            if (j == 0) {
                cout << c[i][j];
            }
            else {
                cout << " " << c[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

