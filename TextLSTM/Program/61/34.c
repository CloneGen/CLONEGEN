int main () {
    int f [20] = {1, 1}, i, n, result [20], a;
    for (i = 2; i < 20; i++) {
        f[i] = f[i - 2] + f[i - 1];
    }
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a;
        result[i] = f[a - 1];
    }
    for (i = 0; i < n; i++) {
        cout << result[i] << endl;
    }
}

