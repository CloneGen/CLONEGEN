int main () {
    int row, col;
    cin >> row >> col;
    int N = row * col;
    int array [100] [100];
    for (int r = 0;
    r < row; r++)
        for (int c = 0;
        c < col; c++)
            cin >> array[r][c];
    int r = 0, c = 0;
    int K = 0;
    while (1) {
        for (int j = c;
        j <= col - 1; j++) {
            cout << array[r][j] << endl;
            K++;
        }
        if (r < row - 1)
            r++;
        if (K == N)
            break;
        for (int i = r;
        i <= row - 1; i++) {
            cout << array[i][col - 1] << endl;
            K++;
        }
        if (c < col - 1)
            col--;
        if (K == N)
            break;
        for (int j = col - 1;
        j >= c; j--) {
            cout << array[row - 1][j] << endl;
            K++;
        }
        if (r < row - 1)
            row--;
        if (K == N)
            break;
        for (int i = row - 1;
        i >= r; i--) {
            cout << array[i][c] << endl;
            K++;
        }
        if (c < col - 1)
            c++;
        if (K == N)
            break;
    }
    return 0;
}

