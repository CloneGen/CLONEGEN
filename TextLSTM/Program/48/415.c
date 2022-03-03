int main () {
    int day, d, i, j, k, di, dj, a [9] [9] = {0}, aa [9] [9], direction [8] [2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};
    cin >> a[4][4] >> day;
    for (d = 0; d < day; d++) {
        memset (aa, 0, sizeof (aa));
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++) {
                if (aa[i][j] == a[i][j])
                    continue;
                for (k = 0; k < 8; k++) {
                    di = direction[k][0];
                    dj = direction[k][1];
                    if (i + di < 9 && i + di >= 0 && j + dj < 9 && j + dj >= 0) {
                        a[i + di][j + dj] += (a[i][j] - aa[i][j]);
                        aa[i + di][j + dj] += (a[i][j] - aa[i][j]);
                    }
                }
                a[i][j] += (a[i][j] - aa[i][j]);
            }
    }
    for (i = 0; i < 9; i++) {
        cout << a[i][0];
        for (j = 1; j < 9; j++)
            cout << ' ' << a[i][j];
        cout << endl;
    }
    return 0;
}

