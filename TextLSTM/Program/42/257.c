int main () {
    int n, k, i = 0, j, temp, a [100000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            for (j = i + 1; j < n; j++) {
                if (a[j] != k) {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    break;
                }
            }
        }
    }
    if (a[0] != k)
        cout << a[0];
    for (i = 1; i < n; i++) {
        if (a[i] != k)
            cout << ' ' << a[i];
    }
    return 0;
}

