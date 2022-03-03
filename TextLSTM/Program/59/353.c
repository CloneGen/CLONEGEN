int main () {
    int n, day, num = 0, i, j, k;
    cin >> n;
    char room1 [n + 2] [n + 2], room2 [n + 2] [n + 2], t;
    t = getchar ();
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1; j++) {
            room1[i][j] = room2[i][j] = getchar ();
        }
    }
    cin >> day;
    for (k = 1; k < day; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (room2[i][j] == '@' || room2[i][j] == '#')
                    continue;
                if (room1[i - 1][j] == '@' || room1[i + 1][j] == '@' || room1[i][j - 1] == '@' || room1[i][j + 1] == '@') {
                    room2[i][j] = '@';
                }
            }
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                room1[i][j] = room2[i][j];
            }
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (room2[i][j] == '@')
                num++;
        }
    }
    cout << num << endl;
    return 0;
}

