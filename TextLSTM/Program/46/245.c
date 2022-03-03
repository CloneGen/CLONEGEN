int main () {
    int a [200] [200];
    int r, c, i, j, p;
    cin >> r >> c;
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            cin >> a[i][j];
        }
    }
    i = 1;
    j = 1;
    while (i <= r && j <= c) {
        for (p = j; p <= c; p++) {
            cout << a[i][p] << endl;
        }
        for (p = i + 1; p <= r; p++) {
            cout << a[p][c] << endl;
        }
        for (p = c - 1; p >= j && i != r && j != c; p--) {
            cout << a[r][p] << endl;
        }
        for (p = r - 1; p > i && i != r && j != c; p--) {
            cout << a[p][j] << endl;
        }
        i++;
        j++;
        r--;
        c--;
    }
    return 0;
}

