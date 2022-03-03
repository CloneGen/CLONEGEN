int main () {
    int row = 0, col = 0;
    cin >> row >> col;
    int a [100] [100];
    memset (a, '0', sizeof (a));
    for (int i = 0;
    i < row; i++) {
        for (int j = 0;
        j < col; j++) {
            cin >> a[i][j];
        }
    }
    int (*p) [100] = a;
    for (int i = 0;
    i < row + col - 1; i++) {
        if (i < col) {
            for (int j = 0;
            j <= row; j++) {
                if (i - j < col && j < row && j >= 0 && i - j >= 0) {
                    cout << *(*(p + j) + i - j) << endl;
                }
            }
        }
        else {
            for (int j = 1;
            j < row; j++) {
                if (i - j < col && j < row && i - j >= 0 && j >= 0) {
                    cout << *(*(p + j) + i - j) << endl;
                }
            }
        }
    }
    return 0;
}

