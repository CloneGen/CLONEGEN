int main () {
    int sz [100] [100], row, col, i, k, x = 0, y = 0, n = 1;
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (k = 0; k < col; k++) {
            cin >> sz[i][k];
        }
    }
    while (n <= row * col) {
        for (k = y; k < (col - y - 1); k++) {
            cout << sz[x][k] << "\n";
            n++;
            if (n > row * col)
                break;
        }
        for (i = x; i < (row - x - 1); i++) {
            cout << sz[i][col - y - 1] << "\n";
            n++;
            if (n > row * col)
                break;
        }
        for (k = col - y - 1; k > y; k--) {
            cout << sz[row - x - 1][k] << "\n";
            n++;
            if (n > row * col)
                break;
        }
        for (i = row - x - 1; i > x; i--) {
            cout << sz[i][y] << "\n";
            n++;
            if (n > row * col)
                break;
        }
        if (x == (row - 1) / 2 && x == y && row == col && row % 2 == 1) {
            cout << sz[x][y] << "\n";
            n++;
        }
        x++;
        y++;
    }
    return 0;
}

