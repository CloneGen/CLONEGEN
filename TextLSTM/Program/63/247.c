int main () {
    int x1, y1;
    cin >> x1 >> y1;
    int a [x1] [y1];
    int i, j;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            cin >> a[i][j];
        }
    }
    int x2, y2;
    cin >> x2 >> y2;
    int b [x2] [y2];
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            cin >> b[i][j];
        }
    }
    int c [x1] [y2];
    int k;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            int sum = 0;
            for (k = 0; k < y1; k++) {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for (i = 0; i < x1; i++) {
        cout << c[i][0];
        for (j = 1; j < y2; j++) {
            cout << " " << c[i][j];
        }
        cout << endl;
    }
    return 0;
}

