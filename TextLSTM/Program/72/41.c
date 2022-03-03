int main () {
    int m, n;
    int str [20] [20];
    cin >> m >> n;
    for (int i = 0;
    i < m; i++)
        for (int j = 0;
        j < n; j++)
            cin >> str[i][j];
    for (int i = 0;
    i < m; i++)
        for (int j = 0;
        j < n; j++) {
            if (i == 0 && j == 0) {
                if ((str[0][0] >= str[0][1]) && (str[0][0] >= str[1][0]))
                    cout << i << " " << j << endl;
            }
            else if (i == 0 && j == n - 1) {
                if ((str[0][n - 1] >= str[1][n - 1]) && (str[0][n - 1] >= str[0][n - 2]))
                    cout << i << " " << j << endl;
            }
            else if (i == m - 1 && j == n - 1) {
                if ((str[m - 1][n - 1] >= str[m - 2][n - 1]) && (str[m - 1][n - 1] >= str[m - 1][n - 2]))
                    cout << i << " " << j << endl;
            }
            else if (i == m - 1 && j == 0) {
                if ((str[m - 1][0] >= str[m - 2][0]) && (str[m - 1][0] >= str[m - 1][1]))
                    cout << i << " " << j << endl;
            }
            else if (i == 0) {
                if ((str[0][j] >= str[0][j - 1]) && (str[0][j] >= str[1][j]) && (str[i][j] >= str[0][j + 1]))
                    cout << i << " " << j << endl;
            }
            else if (j == 0) {
                if ((str[i][j] >= str[i - 1][j]) && (str[i][j] >= str[i + 1][j]) && (str[i][j] >= str[i][j + 1]))
                    cout << i << " " << j << endl;
            }
            else if (i == m - 1) {
                if ((str[i][j] >= str[i - 1][j]) && (str[i][j] >= str[i][j - 1]) && (str[i][j] >= str[i][j + 1]))
                    cout << i << " " << j << endl;
            }
            else if (j == n - 1) {
                if ((str[i][j] >= str[i - 1][j]) && (str[i][j] >= str[i][j - 1]) && (str[i][j] >= str[i + 1][j]))
                    cout << i << " " << j << endl;
            }
            else {
                if ((str[i][j] >= str[i - 1][j]) && (str[i][j] >= str[i][j - 1]) && (str[i][j] >= str[i + 1][j]) && (str[i][j] >= str[i][j + 1]))
                    cout << i << " " << j << endl;
            }
        }
    return 0;
}

