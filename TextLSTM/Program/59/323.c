int main () {
    const  int dirx [4] = {0, 0, 1, -1}, diry [4] = {1, -1, 0, 0};
    int n, m, i, j, k, x, y, mtime, ans = 0;
    char room [200] [200], newroom [200] [200];
    cin >> n;
    cin.getline (room[0], sizeof (room [0]));
    for (i = 0; i < n; i++)
        cin.getline (room[i], sizeof (room [i]));
    cin >> m;
    for (mtime = 1; mtime < m; mtime++) {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                newroom[i][j] = room[i][j];
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (room[i][j] == '@')
                    for (k = 0; k < 4; k++) {
                        x = i + dirx[k];
                        y = j + diry[k];
                        if (0 <= x && x < n && 0 <= y && y < n && room[x][y] == '.')
                            newroom[x][y] = '@';
                    }
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                room[i][j] = newroom[i][j];
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (room[i][j] == '@')
                ans++;
    cout << ans << endl;
    return 0;
}

