int main () {
    int row, col, i, j, k, c = 0, h;
    cin >> row >> col;
    cout << endl;
    k = row * col;
    int a [row] [col], b [row + 2] [col + 2];
    for (i = 0; i <= row - 1; i++) {
        for (j = 0; j <= col - 1; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            b[i][j] = 1;
        }
    }
    for (i = 0; i <= col + 1; i++) {
        b[0][i] = 0;
        b[row + 1][i] = 0;
    }
    for (j = 1; j <= row; j++) {
        b[j][0] = 0;
        b[j][col + 1] = 0;
    }
    i = 0;
    j = 0;
    h = 1;
    while (1 > 0) {
        if (h % 4 == 1 && c < k) {
            do {
                cout << a[i][j] << endl;
                b[i + 1][j + 1] = 0;
                c = c + 1;
                j = j + 1;
            }
            while (b[i + 1][j + 1] != 0);
            h = h + 1;
            i = i + 1;
            j = j - 1;
        }
        if (h % 4 == 2 && c < k) {
            do {
                cout << a[i][j] << endl;
                b[i + 1][j + 1] = 0;
                c = c + 1;
                i = i + 1;
            }
            while (b[i + 1][j + 1] != 0);
            h = h + 1;
            j = j - 1;
            i = i - 1;
        }
        if (h % 4 == 3 && c < k) {
            do {
                cout << a[i][j] << endl;
                b[i + 1][j + 1] = 0;
                c = c + 1;
                j = j - 1;
            }
            while (b[i + 1][j + 1] != 0);
            h = h + 1;
            i = i - 1;
            j = j + 1;
        }
        if (h % 4 == 0 && c < k) {
            do {
                cout << a[i][j] << endl;
                b[i + 1][j + 1] = 0;
                c = c + 1;
                i = i - 1;
            }
            while (b[i + 1][j + 1] != 0);
            h = h + 1;
            j = j + 1;
            i = i + 1;
        }
        if (c == k)
            break;
    }
    return 0;
}

