int main () {
    int n = 0, i = 0, j = 0, k = 0, h = 0, n1 = 0, sum = 0;
    cin >> n;
    int s [n + 1] [n + 1];
    for (i = 1; i <= n; i++) {
        for (k = 0; k < n; k++) {
            for (h = 0; h < n; h++) {
                cin >> s[k][h];
            }
        }
        sum = 0;
        for (n1 = n; n1 >= 2; n1--) {
            for (j = 0; j <= n1 - 1; j++) {
                s[j][n1] = s[j][0];
                for (h = 0; h <= n1 - 1; h++) {
                    if (s[j][h] < s[j][n1])
                        s[j][n1] = s[j][h];
                }
            }
            for (j = 0; j <= n1 - 1; j++) {
                for (h = 0; h <= n1 - 1; h++) {
                    s[j][h] = s[j][h] - s[j][n1];
                }
            }
            for (j = 0; j <= n - 1; j++) {
                s[n1][j] = s[0][j];
                for (h = 0; h <= n1 - 1; h++) {
                    if (s[h][j] < s[n1][j])
                        s[n1][j] = s[h][j];
                }
            }
            for (j = 0; j <= n1 - 1; j++) {
                for (h = 0; h <= n1 - 1; h++) {
                    s[h][j] = s[h][j] - s[n1][j];
                }
            }
            sum = sum + s[1][1];
            if (n1 > 2) {
                for (j = 2; j <= n1 - 1; j++) {
                    s[0][j - 1] = s[0][j];
                    s[j - 1][0] = s[j][0];
                }
                for (j = 1; j <= n1 - 2; j++) {
                    for (h = 1; h <= n1 - 2; h++) {
                        s[j][h] = s[j + 1][h + 1];
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

