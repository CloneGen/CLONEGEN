int main () {
    int row, col;
    cin >> row >> col;
    int array [row] [col];
    int i, j, k;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            cin >> array[i][j];
    }
    for (i = 0; i < col + row - 1; i++)
        for (j = i, k = 0; (j >= 0) && (k < row); j--, k++)
            if (j < col)
                cout << array[k][j] << endl;
    return 0;
}

