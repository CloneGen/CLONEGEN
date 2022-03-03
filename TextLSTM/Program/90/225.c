int WAY2 (int x, int y);

int WAY1 (int x, int y) {
    if (y == 1)
        return 0;
    else if (y == 2)
        return 1;
    else
        return WAY1 (x, y - 1) + WAY2 (x, y - 1);
}

int WAY2 (int x, int y) {
    if (x < y)
        return 0;
    else if (x == y)
        return 1;
    else
        return WAY1 (x - y, y) + WAY2 (x - y, y);
}

int main () {
    int i, n, M, N, K;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> M >> N;
        K = WAY1 (M, N) + WAY2 (M, N);
        cout << K << endl;
    }
    return 0;
}

