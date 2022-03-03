int main () {
    int a [5] [5];
    int i = 0, j = 0, col, row;
    int max = 0, count = 0;
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 4; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                col = j;
                row = i;
            }
        }
        if ((max <= a[0][col]) && (max <= a[1][col]) && (max <= a[2][col]) && (max <= a[3][col]) && (max <= a[4][col])) {
            cout << row + 1 << " " << col + 1 << " " << a[row][col] << endl;
            count++;
        }
        max = 0;
    }
    if (count == 0)
        cout << "not found" << endl;
    return 0;
}

