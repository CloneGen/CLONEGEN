int main () {
    int col, row, i, k, l, max;
    cin >> row >> col;
    if (row > col)
        max = row;
    else
        max = col;
    int a [max] [max];
    memset (a, 0, sizeof (a));
    for (i = 0; i < row; i++)
        for (k = 0; k < col; k++)
            cin >> a[i][k];
    for (i = 0; i < max * 2 - 1; i++) {
        if (i < max) {
            for (k = 0, l = i - k; k < max && l >= 0; k++, l--)
                if (a[k][l] != 0)
                    cout << a[k][l] << endl;
        }
        else
            for (k = max - 1, l = i - k; k > 0 && l < max; k--, l++)
                if (a[l][k] != 0)
                    cout << a[l][k] << endl;
    }
    return 0;
}

