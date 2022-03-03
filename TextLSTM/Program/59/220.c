int room [110] [110] [110] = {0};

int main () {
    int n, m, i, j, k, count = 0;
    char ch [110] [110];
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> ch[i][j];
            if (ch[i][j] == '.')
                room[i][j][1] = 1;
            if (ch[i][j] == '#')
                room[i][j][1] = 0;
            if (ch[i][j] == '@')
                room[i][j][1] = 2;
        }
    }
    cin >> m;
    for (k = 1; k < m; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (room[i][j][k] >= 2) {
                    room[i][j][k] = 2;
                    room[i + 1][j][k + 1] = 2 * room[i + 1][j][k];
                    room[i][j + 1][k + 1] = 2 * room[i][j + 1][k];
                    room[i - 1][j][k + 1] = 2 * room[i - 1][j][k];
                    room[i][j - 1][k + 1] = 2 * room[i][j - 1][k];
                    room[i][j][k + 1] = 2;
                }
                if (room[i][j][k] == 1 && room[i][j][k + 1] == 0) {
                    room[i][j][k + 1] = 1;
                }
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (room[i][j][m] > 1)
                count++;
        }
    }
    cout << count;
    return 0;
}

