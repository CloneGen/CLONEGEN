int main () {
    int number [7] [7], row, col, i, j, m, sum1 = 0, sum2 = 0;
    scanf ("%d,%d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &number[i][j]);
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum1 = 0;
            sum2 = 0;
            for (m = 0; m < col; m++) {
                if (number[i][j] >= number[i][m]) {
                    sum1 += 1;
                }
            }
            for (m = 0; m < row; m++) {
                if (number[i][j] <= number[m][j]) {
                    sum2 += 1;
                }
            }
            if (sum1 == col && sum2 == row) {
                printf ("%d+%d", i, j);
                break;
            }
        }
        if (sum1 == col && sum2 == row) {
            break;
        }
    }
    if (sum1 != col || sum2 != row) {
        printf ("No");
    }
    return 0;
}

