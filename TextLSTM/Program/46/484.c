int main () {
    int row, col, i, j, k;
    int array [100] [100];
    cin >> row >> col;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> array[i][j];
    if (row % 2 == 0)
        for (k = 0; k < row / 2; k++) {
            if (col - k - 1 == k) {
                for (i = k; i < row - k; i++)
                    cout << array[i][k] << endl;
                break;
            }
            else {
                if (col - k - 1 != k)
                    for (i = k; i < col - k - 1; i++)
                        cout << array[k][i] << endl;
                if (k != row - k - 1)
                    for (i = k; i < row - k - 1; i++)
                        cout << array[i][col - k - 1] << endl;
                else
                    cout << array[k][col - k - 1] << endl;
                if (col - k - 1 != k && k != row - k - 1)
                    for (i = col - k - 1; i > k; i--)
                        cout << array[row - k - 1][i] << endl;
                if (k != row - k - 1 && col - k - 1 != k)
                    for (i = row - k - 1; i > k; i--)
                        cout << array[i][k] << endl;
            }
        }
    else
        for (k = 0; k < row / 2 + 1; k++) {
            if (col - k - 1 == k) {
                for (i = k; i < row - k; i++)
                    cout << array[i][k] << endl;
                break;
            }
            else {
                if (col - k - 1 != k)
                    for (i = k; i < col - k - 1; i++)
                        cout << array[k][i] << endl;
                if (k != row - k - 1)
                    for (i = k; i < row - k - 1; i++)
                        cout << array[i][col - k - 1] << endl;
                else
                    cout << array[k][col - k - 1] << endl;
                if (col - k - 1 != k && k != row - k - 1)
                    for (i = col - k - 1; i > k; i--)
                        cout << array[row - k - 1][i] << endl;
                if (k != row - k - 1 && col - k - 1 != k)
                    for (i = row - k - 1; i > k; i--)
                        cout << array[i][k] << endl;
            }
        }
    return 0;
}

