int path (int m, int n) {
    if (m == n)
        return m;
    if (m > n)
        m = m / 2;
    else if (m < n)
        n = n / 2;
    return path (m, n);
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << path (x, y);
    return 0;
}

