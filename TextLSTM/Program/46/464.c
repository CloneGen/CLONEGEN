int main () {
    int row, col, array [100] [100] [2] = {0};
    int i, j, time = 0;
    cin >> row >> col;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> array[i][j][0];
    for (i = 0; i <= row / 2; i++) {
        if (time == row * col)
            break;
        for (j = 0; j < col; j++) {
            if (array[i][j][1] == 0) {
                cout << array[i][j][0] << endl;
                array[i][j][1] = 1;
                time++;
            }
        }
        for (j = 0; j < row; j++) {
            if (array[j][col - 1 - i][1] == 0) {
                cout << array[j][col - 1 - i][0] << endl;
                array[j][col - 1 - i][1] = 1;
                time++;
            }
        }
        for (j = col - 1; j >= 0; j--) {
            if (array[row - 1 - i][j][1] == 0) {
                cout << array[row - 1 - i][j][0] << endl;
                array[row - 1 - i][j][1] = 1;
                time++;
            }
        }
        for (j = row - 1; j >= 0; j--) {
            if (array[j][i][1] == 0) {
                cout << array[j][i][0] << endl;
                array[j][i][1] = 1;
                time++;
            }
        }
    }
    return 0;
}

