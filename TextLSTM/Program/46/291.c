int main () {
    int row, col;
    cin >> row >> col;
    int i, j, m, n;
    int s = row * col, k = 0;
    int a [200] [200];
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++)
            cin >> a[i][j];
    }
    for (i = 1; (i <= col - i + 1) && (i <= row - i + 1); i++) {
        for (m = i; m <= col - i + 1 && (k - s); m++) {
            cout << a[i][m] << endl;
            k++;
        }
        for (m = i + 1; m <= row - i + 1 && (k - s); m++) {
            cout << a[m][col - i + 1] << endl;
            k++;
        }
        for (m = col - i; m >= i && (k - s); m--) {
            cout << a[row - i + 1][m] << endl;
            k++;
        }
        for (m = row - i; m > i && (k - s); m--) {
            cout << a[m][i] << endl;
            k++;
        }
    }
    return 0;
}

