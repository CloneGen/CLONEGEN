int main () {
    int a [100] [100], row, col, i, j, r, c;
    cin >> row >> col;
    for (i = 0; i <= row - 1; i++)
        for (j = 0; j <= col - 1; j++)
            cin >> a[i][j];
    r = 0;
    c = -1;
    while ((row >= 2) && (col >= 2)) {
        for (i = 1; i <= col; i++) {
            c++;
            cout << a[r][c] << endl;
        }
        for (i = 1; i <= row - 1; i++) {
            r++;
            cout << a[r][c] << endl;
        }
        for (i = 1; i <= col - 1; i++) {
            c--;
            cout << a[r][c] << endl;
        }
        for (i = 1; i <= row - 2; i++) {
            r--;
            cout << a[r][c] << endl;
        }
        col -= 2;
        row -= 2;
    }
    if ((row == 1) && (col != 1))
        for (i = 1; i <= col; i++) {
            c++;
            cout << a[r][c] << endl;
        }
    if ((col == 1) && (row != 1)) {
        c++;
        for (i = 1; i <= row; i++) {
            cout << a[r][c] << endl;
            r++;
        }
    }
    if ((row == 1) && (col == 1))
        cout << a[r][c + 1];
    cin.get ();
    cin.get ();
    return 0;
}

