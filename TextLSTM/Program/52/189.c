int main () {
    int n, m, num [101], t, i, k;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
        cin >> num[i];
    for (k = 1; k <= m; k++) {
        t = num[n];
        for (i = n; i >= 2; i--)
            num[i] = num[i - 1];
        num[1] = t;
    }
    for (i = 1; i <= n; i++) {
        if (i == 1)
            cout << num[i];
        else
            cout << " " << num[i];
    }
    cout << endl;
    return 0;
}

