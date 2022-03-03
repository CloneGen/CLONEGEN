int a [101] [101];

int f (int n) {
    if (n == 1)
        return 0;
    int h, w, mw, mh, i, j;
    for (i = 1; i <= n; ++i) {
        mw = 1000;
        for (h = 1; h <= n; ++h)
            if (a[i][h] < mw)
                mw = a[i][h];
        for (h = 1; h <= n; ++h)
            a[i][h] -= mw;
    }
    for (i = 1; i <= n; ++i) {
        mh = 1000;
        for (h = 1; h <= n; ++h)
            if (a[h][i] < mh)
                mh = a[h][i];
        for (h = 1; h <= n; ++h)
            a[h][i] -= mh;
    }
    w = a[2][2];
    for (i = 2; i < n; ++i)
        for (j = 1; j <= n; ++j)
            a[i][j] = a[i + 1][j];
    for (i = 2; i < n; ++i)
        for (j = 1; j < n; ++j)
            a[j][i] = a[j][i + 1];
    return w + f (n - 1);
}

int main () {
    int n, i, i1, i2;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        for (i1 = 1; i1 <= n; ++i1)
            for (i2 = 1; i2 <= n; ++i2)
                cin >> a[i1][i2];
        cout << f (n) << endl;
    }
    return 0;
}

