int main () {
    int n, i, k, a [100001], b [100001], temp = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] != k) {
            b[temp] = a[i];
            temp++;
        }
    }
    for (i = 0; i < temp - 1; i++) {
        cout << b[i] << " ";
    }
    cout << b[temp - 1];
    return 0;
}

