int main () {
    int n, m, infector = 0;
    char room [100] [101];
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> room[i];
    cin >> m;
    for (int d = 1;
    d < m; d++) {
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                if (room[i][j] == '@') {
                    if (i > 0 && room[i - 1][j] == '.')
                        room[i - 1][j] = '$';
                    if (i < n - 1 && room[i + 1][j] == '.')
                        room[i + 1][j] = '$';
                    if (j > 0 && room[i][j - 1] == '.')
                        room[i][j - 1] = '$';
                    if (j < n - 1 && room[i][j + 1] == '.')
                        room[i][j + 1] = '$';
                }
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                if (room[i][j] == '$')
                    room[i][j] = '@';
    }
    for (int i = 0;
    i < n; i++)
        for (int j = 0;
        j < n; j++)
            if (room[i][j] == '@')
                infector++;
    cout << infector;
    return 0;
}

