int m = 0, n = 0;

int apple (int n, int m) {
    if (n == 1 && m > 0)
        return 1;
    if (n < 1 || m < 1) {
        if (m == 0 && n > 0)
            return 1;
        else
            return 0;
    }
    if (m == 1 && n > 0)
        return 1;
    else
        return apple (n - 1, m) + apple (n, m - n);
}

int main () {
    int t = 0;
    cin >> t;
    while (t > 0) {
        cin >> m >> n;
        cout << apple (n, m) << endl;
        t--;
    }
    return 0;
}

