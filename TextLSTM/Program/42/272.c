int main () {
    int a [100000];
    int n, k, i, j, l;
    l = 0;
    cin >> n;
    cout << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << endl;
    cin >> k;
    i = 0;
    while (i < n) {
        if (a[i] == k) {
            for (j = i + 1; j < n - l; j++) {
                a[j - 1] = a[j];
            }
            a[n - l - 1] = 0;
            l = l + 1;
            i = i - 1;
        }
        i = i + 1;
    }
    for (i = 0; i < n - l - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n - l - 1];
    return 0;
}

