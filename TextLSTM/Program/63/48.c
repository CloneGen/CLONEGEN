int main () {
    int x1, y1, x2, y2, i, j;
    int a [100] [100], b [100] [100];
    cin >> x1 >> y1;
    for (i = 0; i <= x1 - 1; i++) {
        for (j = 0; j <= y1 - 1; j++) {
            cin >> a[i][j];
        }
    }
    cin >> x2 >> y2;
    for (i = 0; i <= x2 - 1; i++) {
        for (j = 0; j <= y2 - 1; j++) {
            cin >> b[i][j];
        }
    }
    int p, q, c [100] [100] = {{0, 0}};
    for (i = 0; i <= x1 - 1; i++) {
        for (p = 0, q = 0; p <= y1 - 1; p++, q++) {
            c[i][0] = c[i][0] + a[i][p] * b[q][0];
        }
        cout << c[i][0];
        for (j = 1; j <= y2 - 1; j++) {
            for (p = 0, q = 0; p <= y1 - 1; p++, q++) {
                c[i][j] = c[i][j] + a[i][p] * b[q][j];
            }
            cout << " " << c[i][j];
        }
        cout << endl;
    }
    return 0;
}

