int main () {
    int iRow, iCol, i, j, k, iMax, iMin, p;
    cin >> iRow >> iCol;
    if (iRow > iCol) {
        iMin = iCol;
        iMax = iRow;
    }
    else {
        iMin = iRow;
        iMax = iCol;
    }
    int a [iMax] [iMax];
    memset (a, 0, sizeof (a));
    for (i = 0; i <= (iRow - 1); i++)
        for (j = 0; j <= (iCol - 1); j++)
            cin >> a[i][j];
    p = 1;
    for (k = 0; k <= (iMax * 2 - 2); k++) {
        if (k > iMax - 1) {
            for (i = p, j = iMax - 1; (i <= iMax - 1) && (j >= p); i++, j--) {
                if (a[i][j] != 0) {
                    cout << a[i][j] << endl;
                }
                else
                    continue;
            }
            p++;
        }
        else {
            for (i = 0, j = k; (i <= k) && (j >= 0); i++, j--) {
                if (a[i][j] != 0)
                    cout << a[i][j] << endl;
                else
                    continue;
            }
        }
    }
    return 0;
}

