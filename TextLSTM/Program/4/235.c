void main () {
    int row, col, array [100] [100], i, j, k;
    scanf ("%d %d", &row, &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf ("%d", &array[i][j]);
        }
    }
    if ((i == 1) && (j == 1))
        printf ("%d\n", array[0][0]);
    else {
        for (j = 0; j < col; j++) {
            k = j;
            for (i = 0; i < row; i++) {
                if (k < 0)
                    break;
                printf ("%d\n", array[i][k]);
                k--;
            }
        }
        for (i = 1; i < row; i++) {
            k = col - 1;
            for (j = i; j < row; j++) {
                if (k < 0)
                    break;
                printf ("%d\n", array[j][k]);
                k--;
            }
        }
    }
}

