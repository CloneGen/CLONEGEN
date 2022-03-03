int main () {
    int a, b, x [22] [22];
    cin >> a >> b;
    for (int i = 0;
    i <= a + 1; i++)
        for (int j = 0;
        j <= b + 1; j++)
            x[i][j] = -1;
    for (int i = 1;
    i <= a; i++)
        for (int j = 1;
        j <= b; j++)
            cin >> x[i][j];
    for (int k = 1;
    k <= a; k++)
        for (int l = 1;
        l <= b; l++) {
            if ((x[k][l] >= x[k - 1][l]) && (x[k][l] >= x[k + 1][l]) && (x[k][l] >= x[k][l - 1]) && (x[k][l] >= x[k][l + 1])) {
                cout << k - 1 << ' ' << l - 1 << endl;
            }
        }
    return 0;
}

