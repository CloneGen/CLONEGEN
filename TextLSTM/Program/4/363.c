int main () {
    int col, row;
    int array [100] [100];
    int (*p) [100];
    cin >> row >> col;
    for (int i = 0;
    i < row; i++)
        for (int j = 0;
        j < col; j++)
            cin >> array[i][j];
    p = array;
    for (int i = 0;
    i <= row + col - 2; i++)
        for (int j = (i >= col) ? (i - col + 1) : 0;
        (j < row) && (i - j >= 0); j++)
            cout << *(*(p + j) + i - j) << endl;
    return 0;
}

