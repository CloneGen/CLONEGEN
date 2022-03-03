int main () {
    int x1, y1, x2, y2;
    int matrix1 [100] [100], matrix2 [100] [100], matrix3 [100] [100];
    int i, j, k, l, r, t, p, number;
    memset (matrix3, 0, sizeof (matrix3));
    cin >> x1 >> y1;
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            cin >> number;
            matrix1[i][j] = number;
        }
    }
    cin >> x2 >> y2;
    for (k = 0; k < x2; k++) {
        for (l = 0; l < y2; l++) {
            cin >> number;
            matrix2[k][l] = number;
        }
    }
    for (r = 0; r < x1; r++) {
        for (t = 0; t < y2; t++) {
            for (p = 0; p < y1; p++) {
                matrix3[r][t] = matrix1[r][p] * matrix2[p][t] + matrix3[r][t];
            }
        }
    }
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            if (j != y2 - 1) {
                cout << matrix3[i][j] << " ";
            }
            else {
                cout << matrix3[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}

