int main () {
    int row, col, array [100] [100], i, j, t;
    cin >> row >> col;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> array[i][j];
    for (t = 0; t < col; t++)
        for (i = 0, j = t; i <= t && j >= 0 && i < row; j--, i++) {
            cout << array[i][j];
            if (i != row - 1 || j != col - 1)
                cout << endl;
        }
    for (t = 1; t <= row - 1; t++)
        for (i = t, j = col - 1; j >= 0 && i <= row - 1; j--, i++) {
            cout << array[i][j];
            if (i != row - 1 || j != col - 1)
                cout << endl;
        }
    return 0;
}

