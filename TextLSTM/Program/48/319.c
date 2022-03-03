int main () {
    int n [5] [9] [9], a, b, k = 0, i, j;
    cin >> a >> b;
    memset (n, 0, sizeof (n));
    n[0][4][4] = a;
    for (i = 1; i <= b; i++) {
        for (j = 0; j < 9; j++) {
            for (k = 0; k < 9; k++) {
                n[i][j][k] = n[i - 1][j][k] * 2;
                if (j > 0) {
                    n[i][j][k] += n[i - 1][j - 1][k];
                    if (k > 0) {
                        n[i][j][k] += n[i - 1][j - 1][k - 1];
                    }
                    if (k < 8) {
                        n[i][j][k] += n[i - 1][j - 1][k + 1];
                    }
                }
                if (k > 0) {
                    n[i][j][k] += n[i - 1][j][k - 1];
                }
                if (k < 8) {
                    n[i][j][k] += n[i - 1][j][k + 1];
                }
                if (j < 8) {
                    n[i][j][k] += n[i - 1][j + 1][k];
                    if (k > 0) {
                        n[i][j][k] += n[i - 1][j + 1][k - 1];
                    }
                    if (k < 8) {
                        n[i][j][k] += n[i - 1][j + 1][k + 1];
                    }
                }
            }
        }
    }
    for (i = 0; i < 9; i++) {
        cout << n[b][i][0];
        for (j = 1; j < 9; j++) {
            cout << ' ' << n[b][i][j];
        }
        cout << endl;
    }
    return 0;
}

