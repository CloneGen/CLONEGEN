int main () {
    int f [20] = {1, 1};
    int g [20];
    int i = 2;
    for (i = 2; i <= 20; i++) {
        f[i] = f[i - 2] + f[i - 1];
    }
    int n, a;
    cin >> n;
    for (int j = 1;
    j <= n; j++) {
        cin >> a;
        g[j] = f[a - 1];
    }
    for (int k = 1;
    k <= n; k++) {
        cout << g[k] << endl;
    }
    return 0;
}

