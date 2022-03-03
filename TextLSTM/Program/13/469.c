int main () {
    int n, i, k;
    cin >> n;
    int a [n];
    for (i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= n - 1; i++) {
        for (k = 0; k <= i - 1; k++) {
            if (a[i] == a[k]) {
                a[i] = 0;
                break;
            }
        }
    }
    for (i = 0; i <= n - 1; i++) {
        if (a[i] != 0) {
            if (i == 0) {
                cout << a[i];
            }
            else
                cout << " " << a[i];
        }
    }
    return 0;
}

