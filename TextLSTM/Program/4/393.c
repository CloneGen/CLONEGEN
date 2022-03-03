int main () {
    int array [100] [100], row, col, i, j, *p = NULL;
    cin >> row >> col;
    memset (array, 0, sizeof (array));
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> array[i][j];
    for (i = 0; i < col; i++)
        for (p = &array[0][i]; *p; p += 99)
            cout << *p << endl;
    for (i = 1; i < row; i++)
        for (p = &array[i][col - 1]; *p; p += 99)
            cout << *p << endl;
    return 0;
}

