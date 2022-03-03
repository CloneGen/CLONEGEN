int main () {
    int row, col, i, j;
    cin >> row >> col;
    int array [row] [col];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> *(*(array + i) + j);
        }
    }
    for (i = 0; i < col; i++) {
        int k = 0;
        j = i;
        cout << *(*(array + k) + j) << endl;
        while (k + 1 < row && j - 1 >= 0) {
            k++;
            j--;
            cout << *(*(array + k) + j) << endl;
        }
    }
    for (i = 1; i < row; i++) {
        int k = col - 1;
        j = i;
        cout << *(*(array + j) + k) << endl;
        while (j + 1 < row && k - 1 >= 0) {
            j++;
            k--;
            cout << *(*(array + j) + k) << endl;
        }
    }
    return 0;
}

