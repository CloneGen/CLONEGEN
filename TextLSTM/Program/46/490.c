int main () {
    int row, col, i, j, l, p, q, count;
    int a [100] [100];
    cin >> row >> col;
    p = (row + 1) / 2;
    q = (col + 1) / 2;
    count = 0;
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            cin >> a[i][j];
        }
    }
    if (row <= col && row % 2 == 1) {
        for (i = 1; i <= row / 2; i++) {
            for (j = i; j <= col - i + 1; j++) {
                cout << a[i][j] << endl;
                count++;
            }
            for (l = i + 1; l <= row - i + 1; l++) {
                cout << a[l][col - i + 1] << endl;
                count++;
            }
            for (j = col - i; j >= i; j--) {
                cout << a[row - i + 1][j] << endl;
                count++;
            }
            for (l = row - i; l >= i + 1; l--) {
                cout << a[l][i] << endl;
                count++;
            }
        }
        for (j = (row + 1) / 2; j <= col - (row - 1) / 2; j++) {
            cout << a[p][j] << endl;
        }
    }
    else if (row > col && col % 2 == 1) {
        for (i = 1; i <= col / 2; i++) {
            for (j = i; j <= col - i + 1; j++) {
                cout << a[i][j] << endl;
                count++;
            }
            for (l = i + 1; l <= row - i + 1; l++) {
                cout << a[l][col - i + 1] << endl;
                count++;
            }
            for (j = col - i; j >= i; j--) {
                cout << a[row - i + 1][j] << endl;
                count++;
            }
            for (l = row - i; l >= i + 1; l--) {
                cout << a[l][i] << endl;
                count++;
            }
        }
        for (i = (col + 1) / 2; i <= row - (col - 1) / 2; i++) {
            cout << a[i][q] << endl;
        }
    }
    else {
        for (i = 1; i <= row / 2; i++) {
            if (count == row * col)
                break;
            else {
                for (j = i; j <= col - i + 1; j++) {
                    cout << a[i][j] << endl;
                    count++;
                }
                for (l = i + 1; l <= row - i + 1; l++) {
                    cout << a[l][col - i + 1] << endl;
                    count++;
                }
                for (j = col - i; j >= i; j--) {
                    cout << a[row - i + 1][j] << endl;
                    count++;
                }
                for (l = row - i; l >= i + 1; l--) {
                    cout << a[l][i] << endl;
                    count++;
                }
            }
        }
    }
    return 0;
}

