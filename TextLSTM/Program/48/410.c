int main () {
    int m, n, i, j, g, cnt [9] [9] = {0};
    cin >> m >> n;
    cnt[4][4] = m;
    for (i = 0; i < n; i++) {
        int sq [9] [9] = {0};
        for (j = 0; j < 9; j++)
            for (g = 0; g < 9; g++) {
                if (cnt[j][g] != 0) {
                    sq[j][g] += cnt[j][g];
                    if (j + 1 < 9) {
                        sq[j + 1][g] += cnt[j][g];
                        if (g + 1 < 9)
                            sq[j + 1][g + 1] += cnt[j][g];
                        if (g - 1 >= 0)
                            sq[j + 1][g - 1] += cnt[j][g];
                    }
                    if (j - 1 >= 0) {
                        sq[j - 1][g] += cnt[j][g];
                        if (g + 1 < 9)
                            sq[j - 1][g + 1] += cnt[j][g];
                        if (g - 1 >= 0)
                            sq[j - 1][g - 1] += cnt[j][g];
                    }
                    if (g + 1 < 9)
                        sq[j][g + 1] += cnt[j][g];
                    if (g - 1 >= 0)
                        sq[j][g - 1] += cnt[j][g];
                }
            }
        for (j = 0; j < 9; j++)
            for (g = 0; g < 9; g++)
                cnt[j][g] += sq[j][g];
    }
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++) {
            if (j < 8)
                cout << cnt[i][j] << ' ';
            else
                cout << cnt[i][j] << endl;
        }
    return 0;
}

