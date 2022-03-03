int main () {
    int a [21];
    int i = 0, j = 0, n = 0;
    cin >> n;
    a[1] = 1;
    a[2] = 1;
    for (i = 3; i <= 20; i++)
        a[i] = a[i - 1] + a[i - 2];
    for (j = 1; j <= n; j++) {
        cin >> i;
        cout << a[i] << endl;
    }
    return 0;
}

