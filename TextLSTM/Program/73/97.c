int main () {
    int a [5] [5];
    int row = 0, column = 0, i, j, k, flag, result = 0, max;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> a[i][j];
    for (i = 0; i < 5; i++) {
        max = 0;
        flag = 1;
        for (j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
        for (k = 0; k < 5; k++) {
            if (max > a[k][column]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            cout << (row + 1) << " " << (column + 1) << " " << max << endl;
            result = 1;
        }
    }
    if (result == 0)
        cout << "not found";
    return 0;
}

