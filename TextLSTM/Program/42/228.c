int main () {
    int k, j, i, n, m;
    k = 0;
    cin >> n;
    int a [100000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for (j = 0; j < n; j++)
        if (a[j] != m) {
            a[k] = a[j];
            k++;
        }
    cout << a[0];
    for (j = 1; j < k; j++)
        cout << " " << a[j];
    return 0;
}

