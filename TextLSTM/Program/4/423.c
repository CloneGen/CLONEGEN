int main () {
    int row, col, k, i, j;
    cin >> row >> col;
    int array [row] [col];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> array[i][j];
    int (*p) [col];
    p = array;
    cout << **p << endl;
    for (k = 1; k <= row + col - 2; k++)
        for (i = 0, j = k - i; i < row; i++, j--) {
            if (i >= 0 && i < row && j >= 0 && j < col)
                cout << *(*(p + i) + j) << endl;
        }
    return 0;
}

