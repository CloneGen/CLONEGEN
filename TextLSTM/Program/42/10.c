int main () {
    int i, j = 0, k, m, n, l, b = 0;
    int a [1000001];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> m;
        a[i] = m;
    }
    cin >> k;
    while (j <= i) {
        if (a[j] == k) {
            for (l = j; l <= i; l++)
                a[l] = a[l + 1];
            b++;
        }
        else
            j++;
    }
    for (i = 0; i < n - b - 1; i++)
        cout << a[i] << " ";
    cout << a[n - b - 1];
    return 0;
}

