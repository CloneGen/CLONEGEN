int main () {
    int i, j, k, x = 0, n, a [20000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        k = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                k++;
            }
        }
        if (k == 0) {
            x++;
            if (x == 1) {
                cout << a[i];
            }
            else {
                cout << " " << a[i];
            }
        }
    }
    return 0;
}

