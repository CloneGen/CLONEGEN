int main () {
    int n, i, j, l, t = 0, b, k;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (j = 0; j < n - t - 1; j++) {
        if (a[j] == k) {
            for (l = j; l < n - 1; l++)
                a[l] = a[l + 1];
            j = j - 1;
            t = t + 1;
        }
    }
    if (a[n - t - 1] == k)
        t = t + 1;
    for (b = 0; b < n - t - 1; b++)
        cout << a[b] << " ";
    cout << a[n - t - 1] << endl;
    return 0;
}

