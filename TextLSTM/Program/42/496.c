int main () {
    int n, a [100001], k, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    i = 1;
    while (i <= n)
        if (a[i] == k) {
            for (j = i; j <= n; j++)
                a[j] = a[j + 1];
            n = n - 1;
        }
        else
            i++;
    for (i = 1; i <= n - 1; i++)
        cout << a[i] << " ";
    cout << a[n];
    return 0;
}

