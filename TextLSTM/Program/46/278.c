int main () {
    int row, col, n, i, j, count = 0, sum;
    int array [120] [120], times;
    cin >> row >> col;
    sum = row * col;
    for (i = 1; i <= row; i++)
        for (j = 1; j <= col; j++)
            cin >> array[i][j];
    i = 1;
    j = 1;
    while (1) {
        n = i;
        for (j = n; j <= col - n + 1; j++) {
            cout << array[i][j] << endl;
            count++;
        }
        j--;
        i++;
        if (count >= sum)
            break;
        for (; i <= row - n + 1; i++) {
            cout << array[i][j] << endl;
            count++;
        }
        if (count >= sum)
            break;
        i--;
        j--;
        for (; j >= n; j--) {
            cout << array[i][j] << endl;
            count++;
        }
        if (count >= sum)
            break;
        j++;
        i--;
        for (; i > n; i--) {
            cout << array[i][j] << endl;
            count++;
        }
        if (count >= sum)
            break;
        i++;
        j++;
    }
    return 0;
}

