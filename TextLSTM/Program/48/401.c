int main () {
    int container [10] [10] = {0};
    int temp [10] [10] = {0};
    int m, day;
    int i, j, k;
    cin >> m >> day;
    container[5][5] = m;
    for (i = 1; i <= day; i++) {
        for (j = 1; j <= 9; j++) {
            for (k = 1; k <= 9; k++) {
                if (container[j][k] != 0) {
                    temp[j][k] += container[j][k] * 2;
                    temp[j - 1][k] += container[j][k];
                    temp[j + 1][k] += container[j][k];
                    temp[j][k - 1] += container[j][k];
                    temp[j][k + 1] += container[j][k];
                    temp[j - 1][k + 1] += container[j][k];
                    temp[j - 1][k - 1] += container[j][k];
                    temp[j + 1][k - 1] += container[j][k];
                    temp[j + 1][k + 1] += container[j][k];
                }
            }
        }
        for (j = 1; j <= 9; j++) {
            for (k = 1; k <= 9; k++) {
                container[j][k] = temp[j][k];
            }
        }
        for (j = 1; j <= 9; j++)
            for (k = 1; k <= 9; k++)
                temp[j][k] = 0;
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 8; j++) {
            cout << container[i][j] << " ";
        }
        cout << container[i][9] << endl;
    }
    return 0;
}

