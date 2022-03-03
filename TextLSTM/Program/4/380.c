int main () {
    int row, col, dia, array [101] [101], i, j;
    cin >> row >> col;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> *(*(array + i) + j);
    for (dia = 0; dia < row + col - 1; dia++)
        for (i = 0; i <= dia; i++) {
            if ((dia - i) < col && i < row)
                cout << *(*(array + i) + (dia - i)) << endl;
        }
    return 0;
}

