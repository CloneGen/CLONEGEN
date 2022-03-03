int main () {
    int row, col, n, m, a [101] [101];
    int i, j, row1, row2, col1, col2;
    cin >> row >> col;
    for (i = 1; i <= row; i++)
        for (j = 1; j <= col; j++)
            cin >> a[i][j];
    for (i = row, j = col; i >= 1 && j >= 1; i = i - 2, j = j - 2) {
        row1 = (row - i) / 2 + 1;
        row2 = row - (row - i) / 2;
        col1 = (col - j) / 2 + 1;
        col2 = col - (col - j) / 2;
        if ((i != 1 && j != 1) || (i == 1 && j == 1)) {
            for (m = col1; m <= col2; m++)
                cout << a[row1][m] << endl;
            for (n = row1 + 1; n <= row2; n++)
                cout << a[n][col2] << endl;
            for (m = col2 - 1; m >= col1; m--)
                cout << a[row2][m] << endl;
            for (n = row2 - 1; n >= row1 + 1; n--)
                cout << a[n][col1] << endl;
        }
        else {
            if (i == 1) {
                for (m = col1; m <= col2; m++)
                    cout << a[row1][m] << endl;
            }
            else {
                for (n = row1; n <= row2; n++)
                    cout << a[n][col1] << endl;
            }
        }
    }
    return 0;
}

