int main () {
    int a [105] [105] = {0}, n = 0, row = 0, col = 0, i = 0, j = 0, *p = NULL, sum = 0;
    cin >> n;
    while (n--) {
        cin >> row >> col;
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                cin >> a[i][j];
            }
        }
        for (p = &a[0][0]; p < &a[0][0] + col; p++) {
            sum = sum + *p;
        }
        for (i = 1; i < row - 1; i++) {
            sum = sum + a[i][0] + a[i][col - 1];
        }
        if (row > 1) {
            for (p = &a[row - 1][0]; p < &a[row - 1][0] + col; p++) {
                sum = sum + *p;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}

