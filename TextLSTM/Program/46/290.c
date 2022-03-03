int main () {
    int array [100] [100];
    int row, col;
    cin >> row >> col;
    int i, j, k, a, b, c, d;
    int A = 0, B = 0, C = 0;
    int sum = 0;
    for (i = 0; i <= row - 1; i++) {
        for (j = 0; j <= col - 1; j++) {
            cin >> array[i][j];
        }
    }
    for (k = 0;; k++) {
        for (a = k; a <= col - k - 1; a++) {
            cout << array[k][a] << endl;
            sum++;
            if (a == col - k - 1)
                A = array[k][a];
        }
        if (sum == row * col)
            break;
        for (b = k; b <= row - k - 1; b++) {
            if (array[b][col - k - 1] == A)
                continue;
            cout << array[b][col - k - 1] << endl;
            sum++;
            if (b == row - k - 1)
                B = array[b][col - k - 1];
        }
        if (sum == row * col)
            break;
        for (c = col - k - 1; c >= k; c--) {
            if (array[row - k - 1][c] == B)
                continue;
            cout << array[row - k - 1][c] << endl;
            sum++;
            if (c == k)
                C = array[row - k - 1][c];
        }
        if (sum == row * col)
            break;
        for (d = row - k - 1; d >= k + 1; d--) {
            if (array[d][k] == C)
                continue;
            cout << array[d][k] << endl;
            sum++;
        }
        if (sum == row * col)
            break;
    }
    return 0;
}

