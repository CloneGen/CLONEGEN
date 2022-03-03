int a [9] [9];
void f (int);

int main () {
    int m, n;
    int i, j;
    cin >> m >> n;
    a[4][4] = m;
    f (n);
    for (i = 0; i < 9; i++) {
        cout << a[i][0];
        for (j = 1; j < 9; j++)
            cout << " " << a[i][j];
        cout << endl;
    }
    return 0;
}

void f (int n) {
    int i, j, k, l;
    while (n--) {
        int b [9] [9] = {0};
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++) {
                if (a[i][j] != 0) {
                    for (k = i - 1; k <= i + 1; k++)
                        for (l = j - 1; l <= j + 1; l++)
                            b[k][l] += a[i][j];
                    b[i][j] += a[i][j];
                }
            }
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9; j++)
                a[i][j] = b[i][j];
    }
}

