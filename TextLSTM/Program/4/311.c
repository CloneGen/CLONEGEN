int main () {
    int a [100] [100], col, row, t, i, j;
    cin >> row >> col;
    if (row > col)
        t = row;
    else
        t = col;
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 2; i <= 2 * t; i++) {
        for (j = 1; j < i; j++) {
            if (j <= row && i - j <= col) {
                cout << a[j][i - j] << endl;
            }
        }
    }
    return 0;
}

