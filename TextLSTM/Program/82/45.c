int main () {
    int m = 0, p = 0, n, a, b;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
            m = m + 1;
        else {
            if (p == 0)
                p = m;
            else if (p > 0 && p < m)
                p = m;
            m = 0;
        }
    }
    if (p < m)
        p = m;
    cout << p << endl;
    return 0;
}

