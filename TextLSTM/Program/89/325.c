int main () {
    int n, i, j, k, a [100000], b [100000], c [100000] = {0}, g = 0;
    cin >> n;
    for (i = 0;; i++) {
        cin >> a[i] >> b[i];
        if (a[i] == 0 && b[i] == 0)
            break;
    }
    for (j = 0; j <= i - 1; j++) {
        c[b[j]] = c[b[j]] + 1;
    }
    for (k = 0; k <= n - 1; k++) {
        if (c[k] == n - 1) {
            if (g == 0) {
                cout << k;
                g = 1;
            }
            else {
                cout << " " << k;
            }
        }
    }
    if (g == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

