int main () {
    int i, j, i1, j1, n, n1 = 0, m;
    int sperm [9] [9] = {0}, temp [9] [9];
    cin >> m >> n;
    sperm[4][4] = m;
    do {
        n1++;
        for (i = 0; i <= 8; i++) {
            for (j = 0; j <= 8; j++) {
                temp[i][j] = 0;
            }
        }
        for (i = 5 - n1; i <= 3 + n1; i++) {
            for (j = 5 - n1; j <= 3 + n1; j++) {
                for (i1 = i - 1; i1 <= i + 1; i1++) {
                    for (j1 = j - 1; j1 <= j + 1; j1++) {
                        temp[i1][j1] = temp[i1][j1] + sperm[i][j];
                    }
                }
            }
        }
        for (i = 0; i <= 8; i++) {
            for (j = 0; j <= 8; j++) {
                sperm[i][j] = sperm[i][j] + temp[i][j];
            }
        }
    }
    while (n1 < n);
    for (i = 0; i <= 8; i++) {
        for (j = 0; j <= 8; j++) {
            cout << sperm[i][j];
            if (j < 8)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

