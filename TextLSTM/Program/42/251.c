int main () {
    int n, i, k, e = 0, j;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (j = 0; j < n - e; j++)
        while (a[j] == k) {
            for (i = j; i < n - 1 - e; i++)
                a[i] = a[i + 1];
            a[i] = 0;
            e++;
        }
    for (i = 0; i < n - e - 1; i++)
        cout << a[i] << " ";
    cout << a[n - e - 1];
    return 0;
}

