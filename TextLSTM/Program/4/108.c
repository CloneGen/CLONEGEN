int main () {
    int a [100] [100], row, col, i, j, s;
    cin >> row >> col;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> a[i][j];
    for (s = 0; s < row + col - 1; s++) {
        for (i = 0; i < row; i++) {
            if (s - i < col) {
                if (s >= i)
                    cout << a[i][s - i] << endl;
                else
                    break;
            }
        }
    }
    return 0;
}

