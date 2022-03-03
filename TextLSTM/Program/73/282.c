int main () {
    int a [6] [6], i, j, row, colum, k, max, flag = 1, m, n;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++)
            cin >> a[i][j];
    for (i = 1; i <= 5; i++) {
        max = a[i][1];
        n = 1;
        for (j = 1; j <= 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                colum = j;
                n = 0;
            }
        }
        if (n) {
            row = i;
            colum = 1;
        }
        m = 1;
        for (k = 1; k <= 5; k++) {
            if (max > a[k][colum])
                m = 0;
        }
        if (m) {
            cout << row << " " << colum << " " << max;
            flag = 0;
        }
    }
    if (flag)
        cout << "not found";
    return 0;
}

