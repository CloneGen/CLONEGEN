int main () {
    int j, n, k, i;
    cin >> n;
    int a [100000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    int t = 0;
    for (i = 0; i < n - t;) {
        if (a[i] == k) {
            for (j = i; j < n - t; j++)
                a[j] = a[j + 1];
            t++;
        }
        else
            i++;
    }
    for (int i = 0;
    i < n - t - 1; i++)
        cout << a[i] << " ";
    cout << a[n - t - 1];
    return 0;
}

