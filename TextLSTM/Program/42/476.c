int main () {
    int n, i, k, j, s = 0;
    cin >> n;
    const  int p = n;
    int a [p];
    for (i = 0; i <= (n - 1); i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = n - 2; i >= 0; i--) {
        if (a[i] == k) {
            s = s + 1;
            for (j = i; j <= n - 2; j++)
                a[j] = a[j + 1];
        }
    }
    if (a[n - 1] == k)
        s = s + 1;
    for (j = 1; j <= n - s - 1; j++) {
        cout << a[j - 1] << ' ';
    }
    cout << a[n - s - 1];
    return 0;
}

