int f (int a, int m) {
    if (a < m)
        return 0;
    int kind = 1;
    for (int i = m;
    i < a; i++) {
        if (a % i == 0)
            kind = kind + f (a / i, i);
    }
    return kind;
}

int main () {
    int n, a [100];
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    for (int i = 0;
    i < n; i++)
        cout << f (a[i], 2) << endl;
    return 0;
}

