int main () {
    int n, i, j = 0, k, m;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            for (m = i; m < n; m++) {
                a[m] = a[m + 1];
            }
            i--;
            j++;
        }
    }
    for (i = 0; i < n - j; i++) {
        cout << a[i];
        if (i != n - j - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}

