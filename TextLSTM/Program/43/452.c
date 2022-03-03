int main () {
    int n, x, y, i, r, j, s;
    cin >> n;
    for (x = 3; x <= n / 2; x += 2) {
        y = n - x;
        r = sqrt (x);
        s = sqrt (y);
        for (i = 2; i <= r; i++) {
            if (x % i == 0) {
                break;
            }
        }
        for (j = 2; j <= s; j++) {
            if (y % j == 0) {
                break;
            }
        }
        if ((i == r + 1) && (j == s + 1))
            cout << x << ' ' << y << endl;
    }
    return 0;
}

