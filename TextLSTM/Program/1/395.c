int fenjie (int n, int x) {
    int i, t = 0;
    for (i = x; i <= sqrt (n); i++) {
        if (n % i == 0) {
            t = t + 1 + fenjie (n / i, i);
        }
    }
    return t;
}

int main () {
    int i, t, n;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n;
        cout << fenjie (n, 2) + 1 << endl;
    }
    return 0;
}

