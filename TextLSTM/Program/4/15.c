int main () {
    int row, col, array [100] [100], sum, i, j;
    scanf ("%d%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            scanf ("%d", &array[i][j]);
    }
    if (row < col) {
        for (sum = 0; sum <= row - 1; sum++) {
            for (i = 0; i <= sum; i++) {
                j = sum - i;
                printf ("%d\n", array[i][j]);
            }
        }
        for (sum = row; sum <= col - 1; sum++) {
            for (i = 0; i <= row - 1; i++) {
                j = sum - i;
                printf ("%d\n", array[i][j]);
            }
        }
        for (sum = col; sum <= col + row - 2; sum++) {
            for (i = sum - col + 1; i <= row - 1; i++) {
                j = sum - i;
                printf ("%d\n", array[i][j]);
            }
        }
    }
    else {
        for (sum = 0; sum <= col - 1; sum++) {
            for (i = 0; i <= sum; i++) {
                j = sum - i;
                printf ("%d\n", array[i][j]);
            }
        }
        for (sum = col; sum <= row - 1; sum++) {
            for (i = sum - col + 1; i <= sum; i++) {
                j = sum - i;
                printf ("%d\n", array[i][j]);
            }
        }
        for (sum = row; sum <= row + col - 2; sum++) {
            for (i = sum - col + 1; i <= row - 1; i++) {
                j = sum - i;
                printf ("%d\n", array[i][j]);
            }
        }
    }
    return 0;
}

