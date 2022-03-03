int main () {
    int n, a;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a;
        int x1 = 1, x2 = 1, t;
        for (int k = 2;
        k < a; k++) {
            t = x2;
            x2 = x2 + x1;
            x1 = t;
        }
        cout << x2 << endl;
    }
}

