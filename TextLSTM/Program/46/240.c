int main () {
    int a [100] [100];
    int row, col;
    int n = 0;
    cin >> row >> col;
    for (int i = 1;
    i <= row; i++)
        for (int j = 1;
        j <= col; j++)
            cin >> a[i][j];
    for (int i = 1;
    i <= (row + 1) / 2; i++)
        for (int j = i;
        j <= col + 1 - i; j++) {
            if (n == row * col)
                break;
            cout << a[i][j] << endl;
            n++;
            if (j == col + 1 - i)
                for (int k = i + 1;
                k <= row + 1 - i; k++) {
                    if (n == row * col)
                        break;
                    cout << a[k][j] << endl;
                    n++;
                    if (k == row + 1 - i)
                        for (int l = col - i;
                        l >= i; l--) {
                            if (n == row * col)
                                break;
                            cout << a[k][l] << endl;
                            n++;
                            if (l == i)
                                for (int m = row - i;
                                m >= 1 + i; m--) {
                                    if (n == row * col)
                                        break;
                                    cout << a[m][l] << endl;
                                    n++;
                                }
                        }
                }
        }
    return 0;
}

