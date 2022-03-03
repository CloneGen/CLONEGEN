int a [11] [11] = {0};

void done (int m, int n) {
    int b [11] [11] = {0}, i, j;
    if (n == 0)
        a[5][5] = m;
    else {
        done (m, n - 1);
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++) {
                if (a[i][j] != 0) {
                    for (int k = i - 1;
                    k <= i + 1; k++)
                        for (int t = j - 1;
                        t <= j + 1; t++)
                            b[k][t] = a[i][j] + b[k][t];
                    b[i][j] = b[i][j] + a[i][j];
                }
            }
        for (i = 1; i <= 9; i++)
            for (j = 1; j <= 9; j++)
                a[i][j] = b[i][j];
    }
}

int main () {
    int m, n, i, j;
    cin >> m >> n;
    done (m, n);
    for (i = 1; i <= 9; i++)
        for (j = 1; j <= 9; j++) {
            if (j == 9)
                cout << a[i][j] << endl;
            else
                cout << a[i][j] << " ";
        }
    return 0;
}

