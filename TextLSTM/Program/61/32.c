int main () {
    int i, j, n, m;
    int f [25];
    f[1] = 1;
    f[2] = 1;
    cin >> m;
    for (j = 1; j <= m; j++) {
        cin >> n;
        if ((n == 1) || (n == 2)) {
            cout << f[n] << endl;
        }
        else {
            for (i = 3; i <= n; i++) {
                f[i] = f[i - 1] + f[i - 2];
            }
            cout << f[n] << endl;
        }
    }
    return 0;
}

