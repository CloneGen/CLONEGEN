int main () {
    int n, i, j, k, p;
    cin >> n;
    int a [20001];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (j = 0; j < n; j++) {
        for (k = j + 1; k < n; k++) {
            if (a[k] != 0) {
                if (a[j] == a[k]) {
                    a[k] = 0;
                }
            }
        }
    }
    cout << a[0];
    for (p = 1; p < n; p++) {
        if (a[p] != 0)
            cout << " " << a[p];
        continue;
    }
    cout << endl;
    return 0;
}

