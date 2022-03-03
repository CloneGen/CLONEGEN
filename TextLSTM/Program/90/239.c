int m, n, k;
int fenfa (int x, int y);

int main () {
    int i, j, t;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> m >> n;
        k = fenfa (m, n);
        cout << k << endl;
    }
    return 0;
}

int fenfa (int x, int y) {
    if (x == 1)
        return 1;
    if (y == 1)
        return 1;
    if (x == 0 || y == 0)
        return 1;
    if (x < 0 || y < 0)
        return 0;
    if (x != 1 && y != 1 && x != 0 && y != 0)
        return (fenfa (x, y - 1) + fenfa (x - y, y));
}

