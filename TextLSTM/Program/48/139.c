int main () {
    int a [9] [9], b [9] [9];
    int m, n;
    int i, j, k;
    cin >> m;
    cin >> n;
    for (j = 0; j < 9; j++) {
        for (i = 0; i < 9; i++) {
            a[j][i] = 0;
        }
    }
    for (j = 0; j < 9; j++) {
        for (i = 0; i < 9; i++) {
            b[j][i] = 0;
        }
    }
    for (k = 0; k < n; k++) {
        if (k == 0) {
            a[4][4] = 2 * m;
            a[3][3] = m;
            a[3][4] = m;
            a[3][5] = m;
            a[4][3] = m;
            a[4][5] = m;
            a[5][3] = m;
            a[5][4] = m;
            a[5][5] = m;
        }
        if (k == 1) {
            for (j = 1; j < 8; j++) {
                for (i = 1; i < 8; i++) {
                    b[j][i] = 2 * a[j][i] + a[j - 1][i - 1] + a[j - 1][i] + a[j - 1][i + 1] + a[j][i - 1] + a[j][i + 1] + a[j + 1][i - 1] + a[j + 1][i] + a[j + 1][i + 1];
                }
            }
            for (j = 0; j < 9; j++) {
                for (i = 0; i < 9; i++) {
                    a[j][i] = b[j][i];
                }
            }
        }
        if (k == 2) {
            for (j = 1; j < 8; j++) {
                for (i = 1; i < 8; i++) {
                    b[j][i] = 2 * a[j][i] + a[j - 1][i - 1] + a[j - 1][i] + a[j - 1][i + 1] + a[j][i - 1] + a[j][i + 1] + a[j + 1][i - 1] + a[j + 1][i] + a[j + 1][i + 1];
                }
            }
            for (j = 0; j < 9; j++) {
                for (i = 0; i < 9; i++) {
                    a[j][i] = b[j][i];
                }
            }
        }
        if (k == 3) {
            for (j = 1; j < 8; j++) {
                for (i = 1; i < 8; i++) {
                    b[j][i] = 2 * a[j][i] + a[j - 1][i - 1] + a[j - 1][i] + a[j - 1][i + 1] + a[j][i - 1] + a[j][i + 1] + a[j + 1][i - 1] + a[j + 1][i] + a[j + 1][i + 1];
                }
            }
            for (i = 1; i < 8; i++) {
                b[0][i] = a[1][i - 1] + a[1][i] + a[1][i + 1];
            }
            for (i = 1; i < 8; i++) {
                b[8][i] = a[7][i - 1] + a[7][i] + a[7][i + 1];
            }
            for (j = 1; j < 8; j++) {
                b[j][0] = a[j - 1][1] + a[j][1] + a[j + 1][1];
            }
            for (j = 1; j < 8; j++) {
                b[j][8] = a[j - 1][7] + a[j][7] + a[j + 1][7];
            }
            b[0][8] = b[8][8] = b[8][0] = b[0][0] = a[1][1];
            for (j = 0; j < 9; j++) {
                for (i = 0; i < 9; i++) {
                    a[j][i] = b[j][i];
                }
            }
        }
    }
    for (j = 0; j < 9; j++) {
        for (i = 0; i < 8; i++) {
            cout << a[j][i] << " ";
        }
        cout << a[j][8] << endl;
    }
    return 0;
}

