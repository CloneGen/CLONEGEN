int main () {
    int i, n;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++) {
        for (int j = i + 1;
        j < n; j++) {
            if (a[j] == a[i]) {
                for (int k = j;
                k < n; k++) {
                    a[k] = a[k + 1];
                }
                n = n - 1;
                j = j - 1;
            }
            else
                continue;
        }
    }
    for (i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1] << endl;
    return 0;
}

