int main () {
    int i, n;
    cin >> n;
    int a [20000] = {0};
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[0];
    int k, m;
    for (k = 1; k < n; k++) {
        for (m = 0; m < k; m++) {
            if (a[k] != a[m])
                continue;
            else
                break;
        }
        if (m == k && a[k] != a[k - 1])
            cout << " " << a[k];
    }
    return 0;
}

