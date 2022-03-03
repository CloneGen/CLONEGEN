int binary (int m, int n) {
    if (m == n)
        return m;
    if (m < n / 2 + 1)
        return binary (m, n / 2);
    if (n < m / 2 + 1)
        return binary (m / 2, n);
    else
        return binary (m / 2, n / 2);
    return 0;
}

int main () {
    int x, y;
    cin >> x >> y;
    cout << binary (x, y) << endl;
    return 0;
}

