int main () {
    int a [110] [110];
    int row, col;
    cin >> row >> col;
    for (int i1 = 0;
    i1 < row; i1++) {
        for (int j1 = 0;
        j1 < col; j1++)
            cin >> *(*(a + i1) + j1);
    }
    if (row < col) {
        for (int i = 0;
        i < col; i++) {
            for (int j = i;
            j >= 0; j--) {
                if (i - j <= row - 1 && i - j >= 0)
                    cout << *(*(a + (i - j)) + j) << endl;
            }
        }
        for (int k = col;
        k <= col + row - 2; k++) {
            for (int w = col - 1;
            w >= 1; w--) {
                if (k - w <= row - 1 && w <= col - 1)
                    cout << *(*(a + k - w) + w) << endl;
            }
        }
    }
    else if (row > col) {
        for (int i = 0;
        i < col; i++) {
            for (int j = i;
            j >= 0; j--) {
                if (i - j <= row - 1)
                    cout << *(*(a + (i - j)) + j) << endl;
            }
        }
        for (int k = col;
        k <= col + row - 2; k++) {
            for (int w = col - 1;
            w >= 0; w--) {
                if (k - w >= 0 && k - w <= row - 1 && w <= col - 1 && w >= 0)
                    cout << *(*(a + k - w) + w) << endl;
            }
        }
    }
    else if (row = col) {
        for (int i = 0;
        i < col; i++) {
            for (int j = i;
            j >= 0; j--) {
                if (i - j <= row - 1)
                    cout << *(*(a + (i - j)) + j) << endl;
            }
        }
        for (int k = col;
        k <= col + row - 2; k++) {
            for (int w = col - 1;
            w >= 0; w--) {
                if (k - w >= 0 && k - w <= row - 1 && w <= col - 1 && w >= 0)
                    cout << *(*(a + k - w) + w) << endl;
            }
        }
    }
    return 0;
}

