int main () {
    int a [100000];
    int n, m, count = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int j = 0;
    j < n - count;) {
        if (a[j] == m) {
            count += 1;
            for (int k = j;
            k < n - count; k++) {
                a[k] = a[k + 1];
            }
        }
        else
            j += 1;
    }
    for (int t = 0;
    t < n - count - 1; t++) {
        cout << a[t] << ' ';
    }
    cout << a[n - 1 - count] << endl;
    return 0;
}

