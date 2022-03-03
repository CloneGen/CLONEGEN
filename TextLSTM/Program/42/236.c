int main () {
    int n, k;
    int i, j;
    cin >> n;
    int a [n];
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i <= n - 1; i++) {
        if (a[i] == k) {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            i--;
            n--;
        }
    }
    for (i = 0; i <= n - 2; i++)
        cout << a[i] << " ";
    cout << a[i] << endl;
    return 0;
}

