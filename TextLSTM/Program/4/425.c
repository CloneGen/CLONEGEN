int main () {
    int row = 0, col = 0, num [110] [110] = {0}, (*p) [110], i, j, a = 1, b = col - 1, c, d;
    p = num;
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> *(*(p + i) + j);
        }
    }
    for (i = 0; i < col; i++) {
        a = 1;
        c = i;
        cout << *(*(p)+i) << endl;
        while (i - 1 >= 0 && a < row) {
            cout << *(*(p + a) + i - 1) << endl;
            a++;
            i--;
        }
        i = c;
    }
    for (j = 1; j < row; j++) {
        b = col - 1;
        d = j;
        cout << *(*(p + j) + col - 1) << endl;
        while (j + 1 < row && b - 1 >= 0) {
            cout << *(*(p + j + 1) + b - 1) << endl;
            j++;
            b--;
        }
        j = d;
    }
    return 0;
}

