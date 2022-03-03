void row_deduct (int array [101] [101], int n) {
    int i, j, min;
    for (i = 0; i < n; i++) {
        min = array[i][0];
        for (j = 1; j < n; j++)
            if (array[i][j] < min)
                min = array[i][j];
        for (j = 0; j < n; j++)
            array[i][j] -= min;
    }
}

void col_deduct (int array [101] [101], int n) {
    int i, j, min;
    for (i = 0; i < n; i++) {
        min = array[0][i];
        for (j = 1; j < n; j++)
            if (array[j][i] < min)
                min = array[j][i];
        for (j = 0; j < n; j++)
            array[j][i] -= min;
    }
}

void delete22 (int array [101] [101], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 2; j < n; j++)
            array[i][j - 1] = array[i][j];
    for (i = 0; i < n; i++)
        for (j = 2; j < n; j++)
            array[j - 1][i] = array[j][i];
}

int main () {
    int n, i, j, k, sum;
    int array [101] [101];
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                cin >> array[j][k];
        for (j = n; j >= 2; j--) {
            row_deduct (array, j);
            col_deduct (array, j);
            sum += array[1][1];
            delete22 (array, j);
        }
        cout << sum << endl;
    }
    return 0;
}

