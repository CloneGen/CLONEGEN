int main () {
    int row, col;
    cin >> row >> col;
    int array [row] [col];
    int j, i, k;
    int *p = NULL;
    for (j = 0; j < row; j++) {
        p = array[j];
        for (i = 0; i < col; i++)
            cin >> *(p + i);
    }
    p = array[0];
    for (k = 0; k <= row + col - 2; k++)
        for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                if (i + j == k)
                    cout << *(p + i * col + j) << endl;
    return 0;
}

