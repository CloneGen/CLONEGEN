int main () {
    int a [100001];
    int n = 0, i = 0, j = 0, k = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1; i <= n; i++)
        if (a[i] == k) {
            for (j = i; j <= n - 1; j++)
                a[j] = a[j + 1];
            n = n - 1;
            i = i - 1;
        }
    for (i = 1; i <= n; i++)
        if (i == n)
            cout << a[i];
        else
            cout << a[i] << ' ';
    return 0;
}

