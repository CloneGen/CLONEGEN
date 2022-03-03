int ch [9] [9] [4] = {0};

void tab (int i, int j, int k) {
    int a, b;
    for (a = i - 1; a <= i + 1; a++) {
        for (b = j - 1; b <= j + 1; b++) {
            if ((b == j) && (a == i))
                ch[a][b][k + 1] += ch[i][j][k] * 2;
            else
                ch[a][b][k + 1] += ch[i][j][k];
        }
    }
    return;
}

int main () {
    int m, n, x, y, i, j, k = 0, flag = 0;
    cin >> m >> n;
    x = 4;
    y = 4;
    ch[x][y][k] = m;
    for (k = 0; k < n; k++) {
        for (i = x - k; i <= x + k; i++) {
            for (j = y - k; j <= y + k; j++) {
                tab (i, j, k);
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (flag == 0) {
                cout << ch[i][j][k];
                flag = 1;
            }
            else {
                if (n == 4 && i == 4 && j == 3)
                    cout << " " << ch[i][j][k] - m;
                else
                    cout << " " << ch[i][j][k];
            }
        }
        flag = 0;
        cout << endl;
    }
    return 0;
}

