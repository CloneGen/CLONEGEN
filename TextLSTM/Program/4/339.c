int main () {
    int row, col;
    cin >> row >> col;
    int num [110] [110] = {0};
    for (int i = 0;
    i < row; i++)
        for (int j = 0;
        j < col; j++) {
            cin >> *(*(num + i) + j);
        }
    for (int i = 0;
    i < col; i++) {
        for (int j = 0;
        j <= i; j++) {
            if (j < row)
                cout << *(*(num + j) + i - j) << endl;
            else
                break;
        }
    }
    for (int i = 1;
    i < row; i++) {
        for (int j = 0;
        j < row - i; j++) {
            if (j < col)
                cout << *(*(num + i + j) + col - j - 1) << endl;
        }
    }
    return 0;
}

