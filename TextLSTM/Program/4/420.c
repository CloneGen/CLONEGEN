int main () {
    int p [100] [100] = {0};
    int row, col;
    int i, j, k;
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> *(*(p + i) + j);
        }
    }
    for (k = 0; k < row + col - 1; k++) {
        for (i = 0; i <= k && i < row && k - i < col && k - i >= 0; i++) {
            cout << *(*(p + i) + k - i) << endl;
        }
        for (j = col - 1; j <= k && j >= 0 && k - j < row && k - j > 0; j--) {
            cout << *(*(p + k - j) + j) << endl;
        }
    }
    return 0;
}

