void bat (int n, int (*p) [11], int (*q) [11], int t);

int main () {
    int m, n;
    int i, j;
    int a [11] [11] = {0};
    int b [11] [11];
    cin >> m >> n;
    a[5][5] = m;
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            b[i][j] = a[i][j];
        }
    }
    bat (n, a, b, 0);
    return 0;
}

void bat (int n, int (*p) [11], int (*q) [11], int t) {
    int i, j;
    if (t == n) {
        for (i = 1; i <= 9; i++) {
            for (j = 1; j <= 9; j++) {
                if (j != 9)
                    cout << *(*(p + i) + j) << " ";
                else
                    cout << *(*(p + i) + j);
            }
            cout << endl;
        }
        return;
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            (*(*(p + i) + j)) = (*(*(q + i) + j)) * 2 + (*(*(q + i + 1) + j)) + (*(*(q + i - 1) + j)) + (*(*(q + i) + j + 1)) + (*(*(q + i) + j - 1)) + (*(*(q + i + 1) + j + 1)) + (*(*(q + i - 1) + j - 1)) + (*(*(q + i - 1) + j + 1)) + (*(*(q + i + 1) + j - 1));
        }
    }
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            (*(*(q + i) + j)) = (*(*(p + i) + j));
        }
    }
    t++;
    bat (n, p, q, t);
}

