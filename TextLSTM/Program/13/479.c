int main () {
    int a [101], b [20000], n, i;
    for (i = 0; i < 101; i = i + 1) {
        a[i] = 0;
    }
    cin >> n;
    cin >> b[0];
    cout << b[0];
    a[b[0]] = 1;
    for (i = 1; i < n; i++) {
        cin >> b[i];
        if (a[b[i]] == 0) {
            cout << " " << b[i];
            a[b[i]] = 1;
        }
    }
    return 0;
}

