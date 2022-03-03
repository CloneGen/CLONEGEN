int get (int n, int m) {
    if (n == 1)
        return 1;
    while (m >= 2) {
        if (n % m == 0)
            break;
        --m;
    }
    if (m == 1)
        return 0;
    return get (n / m, m) + get (n, m - 1);
}

int main () {
    int t;
    cin >> t;
    for (int i = 0;
    i < t; ++i) {
        int n;
        cin >> n;
        cout << get (n, n) << endl;
    }
    return 0;
}

