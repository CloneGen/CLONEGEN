int main () {
    int array [5] [5], i, j, k, flag = 1, flag2 = 0, max, row, col;
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 4; j++)
            cin >> array[i][j];
    for (i = 0; i <= 4; i++) {
        flag = 1;
        max = array[i][0];
        row = i;
        col = 0;
        for (j = 1; j <= 4; j++) {
            if (max < array[i][j]) {
                max = array[i][j];
                col = j;
            }
        }
        for (k = 0; k <= 4; k++) {
            if (array[k][col] < array[row][col]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << (row + 1) << " " << (col + 1) << " " << array[row][col] << endl;
            flag2 = 1;
        }
    }
    if (flag2 == 0)
        cout << "not found" << endl;
    return 0;
}

