int main () {
    int a [6] [6], i, j, max, k = 0, mark = 0;
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++)
            cin >> a[i][j];
    }
    for (i = 1; i < 6; i++) {
        max = a[i][1];
        for (j = 1; j < 6; j++) {
            if (a[i][j] >= max) {
                max = a[i][j];
                k = j;
            }
        }
        if (a[i][k] <= a[1][k] && a[i][k] <= a[2][k] && a[i][k] <= a[3][k] && a[i][k] <= a[4][k] && a[i][k] <= a[5][k]) {
            mark = 1;
            cout << i << " " << k << " " << a[i][k] << endl;
        }
    }
    if (mark == 0)
        cout << "not found";
    return 0;
}

