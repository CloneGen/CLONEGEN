int main () {
    int row, col, a [100] [100] = {0};
    cin >> row >> col;
    for (int i = 0;
    i < row; i++)
        for (int j = 0;
        j < col; j++)
            cin >> *(*(a + i) + j);
    for (int dia = 0;
    dia < row + col - 1; dia++) {
        if (dia < col)
            for (int iRow = 0;
            dia - iRow >= 0 && iRow < row; iRow++)
                cout << *(*(a + iRow) + dia - iRow) << endl;
        else
            for (int iRow = dia - col + 1;
            dia - iRow >= 0 && iRow < row; iRow++)
                cout << *(*(a + iRow) + dia - iRow) << endl;
    }
    return 0;
}

