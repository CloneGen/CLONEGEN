int main () {
    int *p, n, i, x [105];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x[i];
    }
    p = &x[n];
    cout << *p;
    p--;
    n--;
    while (n > 0) {
        cout << ' ' << *p;
        p--;
        n--;
    }
    return 0;
}

