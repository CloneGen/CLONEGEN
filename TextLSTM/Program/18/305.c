int main () {
    int n, N, sum = 0, min;
    cin >> n;
    int jz [n] [n] [n];
    int i, j, k, t;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> jz[k][i][j];
            }
        }
    }
    for (k = 0; k < n; k++) {
        sum = 0;
        N = n;
        for (t = 1; t < n; t++) {
            for (i = 0; i < N; i++) {
                min = jz[k][i][0];
                for (j = 0; j < N; j++) {
                    if (jz[k][i][j] < min)
                        min = jz[k][i][j];
                }
                for (j = 0; j < N; j++) {
                    jz[k][i][j] = jz[k][i][j] - min;
                }
            }
            for (j = 0; j < N; j++) {
                min = jz[k][0][j];
                for (i = 0; i < N; i++) {
                    if (jz[k][i][j] < min)
                        min = jz[k][i][j];
                }
                for (i = 0; i < N; i++) {
                    jz[k][i][j] = jz[k][i][j] - min;
                }
            }
            sum = sum + jz[k][1][1];
            for (i = 1; i < N -1; i++) {
                for (j = 0; j < N; j++)
                    jz[k][i][j] = jz[k][i + 1][j];
            }
            for (j = 1; j < N -1; j++) {
                for (i = 0; i < n; i++)
                    jz[k][i][j] = jz[k][i][j + 1];
            }
            N = N -1;
        }
        cout << sum << endl;
    }
    return 0;
}

