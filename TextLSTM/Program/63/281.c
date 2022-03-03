int main () {
    int A [100] [100], B [100] [100], C [100] [100];
    int i = 0, j = 0, k = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++)
        for (j = 0; j < y1; j++) {
            cin >> A[i][j];
        }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++)
        for (j = 0; j < y2; j++) {
            cin >> B[i][j];
        }
    for (i = 0; i < x1; i++)
        for (j = 0; j < y2; j++) {
            C[i][j] = 0;
            for (k = 0; k < y1; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2 - 1; j++) {
            cout << C[i][j] << ' ';
        }
        cout << C[i][y2 - 1] << endl;
    }
    return 0;
}

