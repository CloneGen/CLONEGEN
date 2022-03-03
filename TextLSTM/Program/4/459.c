int main () {
    int row, col, i, j, k, a [400] [400] = {0};
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
    for (k = 0; k <= row + col - 1; k++) {
        for (i = 0; i < 2 * k + 1; i++) {
            if (a[i][k - i] != 0) {
                cout << a[i][k - i] << endl;
            }
        }
    }
    return 0;
}

