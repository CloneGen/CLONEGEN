int main () {
    int row, col, i, j, time = 0;
    int a [101] [101] = {0};
    scanf ("%d%d", &row, &col);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= col; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    for (i = 0, j = 0;;) {
        for (i++, j++;; j++) {
            if (a[i][j] == 0)
                break;
            printf ("%d\n", a[i][j]);
            time++;
            a[i][j] = 0;
        }
        if (time == row * col)
            break;
        for (j = j - 1, i = i + 1;; i++) {
            if (a[i][j] == 0)
                break;
            printf ("%d\n", a[i][j]);
            time++;
            a[i][j] = 0;
        }
        if (time == row * col)
            break;
        for (i--, j--;; j--) {
            if (a[i][j] == 0)
                break;
            printf ("%d\n", a[i][j]);
            time++;
            a[i][j] = 0;
        }
        if (time == row * col)
            break;
        for (j++, i--;; i--) {
            if (a[i][j] == 0)
                break;
            printf ("%d\n", a[i][j]);
            time++;
            a[i][j] = 0;
        }
        if (time == row * col)
            break;
    }
    return 0;
}

