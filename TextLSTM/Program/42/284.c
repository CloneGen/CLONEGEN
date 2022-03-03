int main () {
    int n, k;
    int a [100001];
    cin >> n;
    int i, j, s = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1; i <= n; i++) {
        if (a[i] == k) {
            s++;
            for (j = i; j < n; j++)
                a[j] = a[j + 1];
            a[j] = 0;
            i--;
        }
    }
    for (i = 1; i < n - s; i++)
        cout << a[i] << " ";
    cout << a[i];
    return 0;
}

