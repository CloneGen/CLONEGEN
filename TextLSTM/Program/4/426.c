int main () {
    int row, col, a [150] [150];
    cin >> row >> col;
    for (int i = 0;
    i < row; i++) {
        for (int j = 0;
        j < col; j++) {
            cin >> *(*(a + i) + j);
        }
    }
    for (int sum = 0;
    sum <= row + col - 2; sum++) {
        if (sum < col) {
            for (int i = 0;
            i < row && i <= sum; i++) {
                cout << *(*(a + i) + (sum - i)) << endl;
            }
        }
        else {
            for (int i = sum - col + 1;
            sum - i >= 0 && i < row; i++) {
                cout << *(*(a + i) + (sum - i)) << endl;
            }
        }
    }
    return 0;
}

