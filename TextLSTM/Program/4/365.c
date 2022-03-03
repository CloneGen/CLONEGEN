int main () {
    int number [101] [101];
    int row, col;
    cin >> row >> col;
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> *(*(number + i) + j);
        }
    }
    int k;
    for (i = 0; i < row + col - 1; i++) {
        j = 0;
        for (j = 0; i - j >= 0; j++) {
            if (j >= row || i - j >= col)
                continue;
            cout << *(*(number + j) + i - j) << endl;
        }
    }
    return 0;
}

