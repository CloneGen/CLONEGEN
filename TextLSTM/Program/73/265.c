int main () {
    int a [6] [6], b [6] [6], c [6] [6], i, j, k, t, p = 0;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
            c[i][j] = a[i][j];
        }
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5 - 1; j++)
            for (k = 1; k <= 5 - j; k++)
                if (a[i][k] > a[i][k + 1]) {
                    t = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = t;
                }
    for (j = 1; j <= 5; j++)
        for (i = 1; i <= 5 - 1; i++)
            for (k = 1; k <= 5 - i; k++)
                if (b[k][j] < b[k + 1][j]) {
                    t = b[k][j];
                    b[k][j] = b[k + 1][j];
                    b[k + 1][j] = t;
                }
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++) {
            if (a[i][5] == b[5][j]) {
                cout << i << " ";
                for (k = 1; k <= 5; k++) {
                    if (c[i][k] == a[i][5])
                        cout << k << " " << a[i][5];
                }
                p = 1;
            }
        }
    if (p == 0)
        cout << "not found";
    return 0;
}

