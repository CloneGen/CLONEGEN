int main () {
    int a [101] [101], b [101] [101], c [101] [101];
    int i1, i2, i3, j1, j2, j3, k;
    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    for (i1 = 0; i1 <= x1 - 1; i1++)
        for (j1 = 0; j1 <= y1 - 1; j1++)
            cin >> a[i1][j1];
    cin >> x2 >> y2;
    for (i2 = 0; i2 <= x2 - 1; i2++)
        for (j2 = 0; j2 <= y2 - 1; j2++)
            cin >> b[i2][j2];
    for (i3 = 0; i3 <= x1 - 1; i3++) {
        for (j3 = 0; j3 <= y2 - 1; j3++) {
            c[i3][j3] = 0;
            for (k = 0; k <= x2 - 1; k++) {
                c[i3][j3] = c[i3][j3] + a[i3][k] * b[k][j3];
            }
        }
        for (j3 = 0; j3 <= y2 - 2; j3++) {
            cout << c[i3][j3] << " ";
        }
        cout << c[i3][y2 - 1] << endl;
    }
    return 0;
}

