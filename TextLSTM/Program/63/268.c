int main () {
    int i, j, k, num = 0, x1, x2, y1, y2, a [100] [100], b [100] [100], c [100] [100];
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            c[i][j] = 0;
            num++;
            for (k = 0; k < y1; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
            if (num % y2 != 0)
                cout << c[i][j] << ' ';
            else
                cout << c[i][j] << endl;
        }
    }
    return 0;
}

