int main () {
    int s [100] [100] = {0}, re [100] [100] = {0}, h = 0, l = 0, dh = 0, dl = 0, i = 0, j = 0, k = 0, x [4] = {0, 1, 0, -1}, y [4] = {1, 0, -1, 0};
    cin >> h >> l;
    for (i = 1; i <= h; i++)
        for (j = 1; j <= l; j++) {
            cin >> s[i][j];
            re[i][j] = 1;
        }
    dh = 1;
    dl = 1;
    k = 0;
    cout << s[1][1] << endl;
    re[1][1] = 0;
    for (i = 1; i <= h * l - 1; i++) {
        if (re[dh + x[k]][dl + y[k]] == 1) {
            re[dh + x[k]][dl + y[k]] = 0;
            dh += x[k];
            dl += y[k];
            cout << s[dh][dl] << endl;
            continue;
        }
        if (re[dh + x[k]][dl + y[k]] == 0) {
            k = (k + 1) % 4;
            re[dh + x[k]][dl + y[k]] = 0;
            dh += x[k];
            dl += y[k];
            cout << s[dh][dl] << endl;
            continue;
        }
    }
    return 0;
}

