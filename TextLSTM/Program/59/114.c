int main () {
    int n, m, i, j, s = 0, k;
    char room [100] [100];
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 1; j++) {
            cin >> room[i][j];
        }
    }
    cin >> m;
    for (k = 1; k <= m - 1; k++) {
        for (i = 0; i <= n - 1; i++) {
            for (j = 0; j <= n - 1; j++) {
                if (room[i][j] == '@') {
                    if (i > 0 && room[i - 1][j] == '.')
                        room[i - 1][j] = '*';
                    if (i < n - 1 && room[i + 1][j] == '.')
                        room[i + 1][j] = '*';
                    if (j > 0 && room[i][j - 1] == '.')
                        room[i][j - 1] = '*';
                    if (j < n - 1 && room[i][j + 1] == '.')
                        room[i][j + 1] = '*';
                }
            }
        }
        for (i = 0; i <= n - 1; i++) {
            for (j = 0; j <= n - 1; j++) {
                if (room[i][j] == '*')
                    room[i][j] = '@';
            }
        }
    }
    for (i = 0; i <= n - 1; i++) {
        for (j = 0; j <= n - 1; j++) {
            if (room[i][j] == '@')
                s += 1;
        }
    }
    cout << s;
    return 0;
}

