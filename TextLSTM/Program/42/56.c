int main () {
    int i, j, n, k, a [100000], t;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            for (j = i; j < n; j++) {
                if (a[j] != k) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                    break;
                }
            }
        }
    }
    cout << a[0];
    for (i = 1; i < n; i++) {
        if (a[i] == k)
            break;
        cout << " " << a[i];
    }
    return 0;
}

