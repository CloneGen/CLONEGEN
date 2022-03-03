int count (int x, int y) {
    if (y == 1 || x == 0)
        return 1;
    if (x < y)
        return count (x, x);
    return (count (x, y - 1) + count (x - y, y));
}

int main () {
    int t = 0, M = 0, N = 0, i = 0, result [25];
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> M >> N;
        result[i] = count (M, N);
    }
    for (i = 0; i < t; i++) {
        cout << result[i] << endl;
    }
    return 0;
}

