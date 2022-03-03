int a [11] [11] [5];

int f (int x, int y, int d) {
    int s;
    if ((a[x][y][d] > 0) || (d == 0))
        return a[x][y][d];
    if (a[x][y][d] == -1)
        return 0;
    s = f (x, y, d - 1) * 2;
    if (x > 1) {
        s += f (x - 1, y, d - 1);
        if (y > 1)
            s += f (x - 1, y - 1, d - 1);
        if (y < 9)
            s += f (x - 1, y + 1, d - 1);
    }
    if (x < 9) {
        s += f (x + 1, y, d - 1);
        if (y > 1)
            s += f (x + 1, y - 1, d - 1);
        if (y < 9)
            s += f (x + 1, y + 1, d - 1);
    }
    if (y > 1)
        s += f (x, y - 1, d - 1);
    if (y < 9)
        s += f (x, y + 1, d - 1);
    if (s != 0) {
        a[x][y][d] = s;
        return s;
    }
    else {
        a[x][y][d] = -1;
        return 0;
    }
}

int main () {
    int m, i, j;
    memset (a, 0, sizeof (a));
    cin >> a[5][5][0] >> m;
    for (i = 1; i <= 9; i++) {
        cout << f (i, 1, m);
        for (j = 2; j <= 9; j++)
            cout << ' ' << f (i, j, m);
        cout << endl;
    }
    return 0;
}

