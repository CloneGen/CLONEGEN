int main () {
    int i, n, k, b = 0;
    int f [100000];
    cin >> n;
    cout << endl;
    for (i = 1; i <= n; i++)
        cin >> f[i - 1];
    cout << endl;
    cin >> k;
    for (i = 0; i < n; i++) {
        if (f[i] != k) {
            b = b + 1;
            if (b != 1)
                cout << " " << f[i];
            else
                cout << f[i];
        }
    }
    return 0;
}

