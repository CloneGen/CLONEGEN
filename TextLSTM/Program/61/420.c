int main () {
    int f [21], n, i, a [20];
    cin >> n;
    f[1] = 1;
    f[2] = 1;
    for (i = 3; i <= 20; i++)
        f[i] = f[i - 1] + f[i - 2];
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = f[a[i]];
    }
    for (i = 1; i <= n; i++) {
        cout << a[i] << endl;
    }
}

