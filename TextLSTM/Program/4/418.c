int main () {
    int row, col, array [100] [100];
    int i, j, k;
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> array[i][j];
        }
    }
    for (k = 0; k < col; k++) {
        cout << array[0][k] << endl;
        for (i = 1, j = k - 1;; i++, j--) {
            if (i < row && j >= 0)
                cout << array[i][j] << endl;
            else
                break;
        }
    }
    for (k = 1; k < row; k++) {
        cout << array[k][col - 1] << endl;
        for (i = k + 1, j = col - 2;; i++, j--) {
            if (i < row && j >= 0)
                cout << array[i][j] << endl;
            else
                break;
        }
    }
    return 0;
}

