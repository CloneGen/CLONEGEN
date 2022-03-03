int main () {
    int k, n;
    int a [100000];
    int i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    for (i = 0; i < n; i++) {
        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }
    return 0;
}

