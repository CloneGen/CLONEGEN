int main () {
    int n, p = 1, i = 0, j = 0;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b [n];
    b[0] = a[0];
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                break;
            }
        }
        if (j == i) {
            b[p] = a[i];
            p++;
        }
    }
    cout << b[0];
    for (i = 1; i < p; i++) {
        cout << " " << b[i];
    }
    return 0;
}

