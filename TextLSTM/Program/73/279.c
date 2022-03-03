int main () {
    int line, column, i, j, min, max, flag = 0;
    int a [5] [5];
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++)
            cin >> a[i][j];
    }
    for (j = 0; j <= 4; j++) {
        min = a[0][j];
        for (i = 0; i <= 4; i++) {
            if (a[i][j] <= min) {
                min = a[i][j];
                line = i;
            }
        }
        max = a[line][j];
        for (i = 0; i <= 4; i++) {
            if (a[line][i] >= max) {
                max = a[line][i];
                column = i;
            }
        }
        if (max == min) {
            cout << line + 1 << " " << column + 1 << " " << a[line][column];
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}

