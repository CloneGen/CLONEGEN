int main () {
    int row = 0, col = 0, array [100] [100], (*p) [100] = array, *q = *p;
    cin >> row >> col;
    for (int i = 0;
    i < row; i++)
        for (int j = 0;
        j < col; j++)
            cin >> array[i][j];
    int x = 0, j = 0;
    while (q != array[row - 1] + col - 1) {
        cout << *q << endl;
        if (q == *p || *p == array[row - 1]) {
            x++;
            if (x >= col) {
                p = array + x + 1 - col;
                q = *p + col - 1;
                j = col - 1;
            }
            else {
                p = array;
                q = *p + x;
                j = x;
            }
        }
        else {
            p++;
            q = *p + (--j);
        }
    }
    cout << *q;
    return 0;
}

