int main () {
    int p [1001], f [1001], i, x, y;
    f[1] = 1;
    for (i = 2; i <= 1000; i++) {
        f[i] = i / 2;
    }
    cin >> x >> y;
    memset (p, 0, sizeof (p));
    p[1] = 1;
    while (x != 1) {
        p[x] = 1;
        x = f[x];
    }
    while (p[y] != 1)
        y = f[y];
    cout << y << endl;
    return 0;
}

