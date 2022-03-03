int a [11] [11], b [11] [11];

void f () {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            b[i][j] = 2 * a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1] + a[i - 1][j - 1] + a[i - 1][j + 1] + a[i + 1][j - 1] + a[i + 1][j + 1];
        }
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            a[i][j] = b[i][j];
        }
    }
}

int main () {
    int i, j, n, m;
    cin >> n >> m;
    for (i = 0; i < 11; i++) {
        for (j = 0; j < 11; j++) {
            a[i][j] = 0;
        }
    }
    a[5][5] = n;
    for (i = 0; i < m; i++) {
        f ();
    }
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            cout << a[i][j];
            if (j != 9)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

