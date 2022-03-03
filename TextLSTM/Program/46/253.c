int main () {
    int a [110] [110];
    int row, col, i, j, k, h, l, count, hzz, lzz;
    cin >> row >> col;
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            cin >> a[i][j];
        }
    }
    count = 0;
    h = row;
    l = col;
    hzz = 1;
    lzz = 1;
    i = 1;
    j = 1;
    while (count <= row * col) {
        for (lzz = j; lzz <= col - (j - 1); lzz++) {
            cout << a[i][lzz] << endl;
            count++;
            if (count == row * col)
                return 0;
        }
        j = lzz - 1;
        for (hzz = i + 1; hzz <= row - i + 1; hzz++) {
            cout << a[hzz][j] << endl;
            count++;
            if (count == row * col)
                return 0;
        }
        i = hzz - 1;
        for (lzz = j - 1; lzz >= col - j + 1; lzz--) {
            cout << a[i][lzz] << endl;
            count++;
            if (count == row * col)
                return 0;
        }
        j = lzz + 1;
        for (hzz = i - 1; hzz >= row - i + 2; hzz--) {
            cout << a[hzz][j] << endl;
            count++;
            if (count == row * col)
                return 0;
        }
        j = j + 1;
        i = hzz + 1;
    }
    return 0;
}

