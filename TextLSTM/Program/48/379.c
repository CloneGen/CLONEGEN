struct  dir {
    int r;
    int l;
}
direct [8] = {{1, 1}, {1, 0}, {1, -1}, {0, 1}, {0, -1}, {-1, 1}, {-1, 0}, {-1, -1}};

int main () {
    int m = 0, n = 0;
    cin >> m >> n;
    int num [5] [9] [9] = {0};
    num[0][4][4] = m;
    for (int day = 1;
    day <= n; day++) {
        for (int x = 0;
        x < 9; x++) {
            for (int y = 0;
            y < 9; y++) {
                if (num[day - 1][x][y] > 0) {
                    for (int i = 0;
                    i < 8; i++)
                        num[day][x + direct[i].r][y + direct[i].l] += num[day - 1][x][y];
                    num[day][x][y] += num[day - 1][x][y] * 2;
                }
            }
        }
    }
    for (int i = 0;
    i < 9; i++) {
        for (int j = 0;
        j < 9; j++) {
            cout << num[n][i][j];
            if (j < 8)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

