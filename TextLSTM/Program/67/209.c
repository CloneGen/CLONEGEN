int main () {
    int n, i = 0;
    double x, y, a = 0, b = 0;
    cin >> n;
    for (i = 1; i <= 1; i++) {
        cin >> x >> y;
        a = y / x;
    }
    for (i = 2; i <= n; i++) {
        cin >> x >> y;
        b = y / x;
        if (b - a > 0.05)
            cout << "better" << endl;
        else if (a - b > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

