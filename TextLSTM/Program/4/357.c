int main () {
    int row = 0, col = 0, i = 0, j = 0;
    cin >> row >> col;
    int a [row] [col];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> *(*(a + i) + j);
    for (i = 0; i < col; i++)
        for (j = 0; j <= i && j < row; j++)
            cout << *(*(a + j) + i - j) << endl;
    for (i = 1; i < row; i++)
        for (j = 0; j < row - i && j < col; j++)
            cout << *(*(a + i + j) + col - 1 - j) << endl;
    return 0;
}

