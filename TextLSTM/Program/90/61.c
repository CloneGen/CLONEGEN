int main () {
    int t, M, N, i;
    cin >> t;
    int f (int x, int y);
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        cout << f (M, N) << endl;
    }
    return 0;
}

int f (int x, int y) {
    int num, m, n;
    if (y == 1 || x == 0)
        return 1;
    else if (y != 1 && x != 0 && x < y)
        return (f (x, y - 1));
    else
        return (f (x, y - 1) + f (x - y, y));
}

