int main () {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    int a [x1] [y1], i, j, k;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y1; j++) {
            cin >> a[i][j];
        }
    cin >> x2 >> y2;
    int b [x2] [y2], c [x1] [y2];
    for (i = 0; i < x2; i++)
        for (j = 0; j < y2; j++) {
            cin >> b[i][j];
        }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++) {
            c[i][j] = 0;
        }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++)
            for (k = 0; k < x2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++) {
            if (j < y2 - 1)
                cout << c[i][j] << ' ';
            if (j == y2 - 1)
                cout << c[i][j] << endl;
        }
    return 0;
}

