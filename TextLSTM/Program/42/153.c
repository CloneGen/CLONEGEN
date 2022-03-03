int main () {
    int n, a [100001], k, i, j;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> k;
    j = 0;
    for (i = 1; i <= n; i++) {
        if (a[i] == k) {
        }
        else {
            if (j == 1) {
                cout << " " << a[i];
            }
            else {
                cout << a[i];
            }
            j = 1;
        }
    }
    return 0;
}

