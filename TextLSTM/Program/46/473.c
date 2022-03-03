int main () {
    int row, col, array [100] [100], i, j, l, t, count1, count2;
    cin >> row >> col;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> array[i][j];
    for (i = row - 1, j = col - 1, t = 0, count1 = row, count2 = col; count1 > 0 && count2 > 0; count1 = count1 - 2, count2 = count2 - 2, t++) {
        for (l = t; l < j - t; l++) {
            cout << array[t][l] << endl;
        }
        for (l = t; l < i - t; l++) {
            cout << array[l][j - t] << endl;
        }
        if (count1 != 1)
            for (l = j - t; l > t; l--) {
                cout << array[i - t][l] << endl;
            }
        else if (count2 != 1)
            cout << array[i - t][j - t];
        if (count2 != 1)
            for (l = i - t; l > t; l--) {
                cout << array[l][t] << endl;
            }
        else if (count1 != 1)
            cout << array[i - t][t];
        if (count1 == 1 && count2 == 1)
            cout << array[t][j - t];
    }
    return 0;
}

