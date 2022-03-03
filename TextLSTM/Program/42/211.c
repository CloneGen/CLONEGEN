int main () {
    int a [100000];
    int n, k;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int j = 0;
    j < n;) {
        if (a[j] == k) {
            for (int l = j;
            l <= n - 1; l++) {
                a[l] = a[l + 1];
            }
            n--;
        }
        else
            j++;
    }
    cout << a[0];
    for (int i = 1;
    i < n; i++) {
        cout << ' ' << a[i];
    }
    return 0;
}

