int main () {
    int n, i, j, k;
    int a [100];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    int c, d;
    for (j = 0; j < (n + 1) / 2; j++) {
        c = a[j];
        d = a[n - j - 1];
        a[j] = d;
        a[n - j - 1] = c;
    }
    for (k = 0; k < n - 1; k++)
        cout << a[k] << " ";
    cout << a[n - 1];
    return 0;
}

