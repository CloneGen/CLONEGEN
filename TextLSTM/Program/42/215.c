int main () {
    int n, i, k, j, t;
    int a [100020];
    cin >> n;
    t = n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 1; i <= t; i++) {
        if (a[i] == k) {
            t--;
            for (j = i; j <= t; j++) {
                a[j] = a[j + 1];
            }
            i--;
        }
    }
    for (int m = 1;
    m <= (t - 1); m++) {
        cout << a[m] << " ";
    }
    cout << a[t];
    return 0;
}

