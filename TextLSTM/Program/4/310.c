int main () {
    int ain [123] [123];
    int row, col;
    cin >> row >> col;
    for (int i = 0;
    i < row; ++i)
        for (int j = 0;
        j < col; ++j)
            cin >> ain[i][j];
    int *p [123];
    for (int i = 0;
    i < row; ++i)
        p[i] = ain[i];
    for (int i = 0;
    i < row + col - 1; ++i) {
        for (int j = 0;
        j < row; ++j) {
            if (j <= i && j > i - col)
                cout << *(p[j]++) << endl;
        }
    }
    return 0;
}

