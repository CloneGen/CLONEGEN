int main () {
    int n, i, j, room [101] [101], num = 0;
    char condition;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            cin >> condition;
            switch (condition) {
            case '.' :
                room[i][j] = -1;
                break;
            case '#' :
                room[i][j] = 0;
                break;
            case '@' :
                room[i][j] = 1;
                num++;
                break;
            }
        }
    int m, k = 1;
    cin >> m;
    while (k < m) {
        k++;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++) {
                if (room[i][j] == k - 1) {
                    if (i + 1 <= n && room[i + 1][j] == -1) {
                        room[i + 1][j] = k;
                        num++;
                    }
                    if (j + 1 <= n && room[i][j + 1] == -1) {
                        room[i][j + 1] = k;
                        num++;
                    }
                    if (i - 1 >= 1 && room[i - 1][j] == -1) {
                        room[i - 1][j] = k;
                        num++;
                    }
                    if (j - 1 >= 1 && room[i][j - 1] == -1) {
                        room[i][j - 1] = k;
                        num++;
                    }
                }
            }
    }
    cout << num << endl;
    return 0;
}

