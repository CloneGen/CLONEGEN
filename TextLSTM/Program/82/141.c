int main () {
    int i, n, x, y, b = 0, t = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x >> y;
        if (((x - 90) >= 0) && ((x - 140) <= 0) && ((y - 60) >= 0) && ((y - 90) <= 0)) {
            t = t + 1;
        }
        else {
            t = 0;
        }
        if (b <= t)
            b = t;
    }
    cout << b << endl;
    return 0;
}

