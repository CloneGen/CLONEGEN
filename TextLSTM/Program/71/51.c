int main () {
    int n, d, a [200] [3], i, j, r, b [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 3; j++)
            cin >> a[i][j];
    }
    for (i = 1; i <= n; i++) {
        if (a[i][2] > a[i][3]) {
            k = a[i][2];
            a[i][2] = a[i][3];
            a[i][3] = k;
        }
    }
    for (i = 1; i <= n; i++) {
        d = 0;
        for (r = a[i][2] - 1; r < a[i][3] - 1; r++) {
            d = d + b[r];
        }
        if ((a[i][2]) <= 2 && (a[i][3] >= 3) && ((a[i][1] % 4 == 0 && a[i][1] % 100 != 0) || (a[i][1] % 400 == 0)))
            d = d + 1;
        if (d % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

