int main () {
    int a [101] [101], row, col, num = 0, m = 1, n = 0;
    cin >> row >> col;
    for (int i = 0;
    i <= row + 1; i++) {
        for (int j = 0;
        j <= col + 1; j++) {
            if (i == 0 || j == 0 || i == row + 1 || j == col + 1)
                a[i][j] = 0;
            else
                cin >> a[i][j];
        }
    }
    int i = 1, j = 1;
    while (num < col * row) {
        cout << a[i][j] << endl;
        a[i][j] = 0;
        num++;
        if (a[i + n][m + j] == 0) {
            if (m != 0) {
                n = m;
                m = 0;
            }
            else {
                m = -n;
                n = 0;
            }
        }
        i = i + n;
        j = j + m;
    }
    return 0;
}

