int main () {
    int row, col;
    int a [100] [100];
    cin >> row >> col;
    for (int i = 0;
    i < row; i++)
        for (int j = 0;
        j < col; j++)
            cin >> a[i][j];
    for (int m = 0;
    m < col + row - 1; m++)
        for (int i = 0;
        i < row; i++)
            for (int j = 0;
            j < col; j++)
                if ((i + j) == m)
                    cout << a[i][j] << endl;
    return 0;
}

