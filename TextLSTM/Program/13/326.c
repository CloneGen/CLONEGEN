int main () {
    int n = 0, j = 0, i = 0, k = 0, a [20000] = {0};
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= 100 && a[i] >= 10) {
            for (j = 0; j < i; j++) {
                if (a[i] == a[j]) {
                    i = i - 1;
                    n = n - 1;
                }
            }
        }
        else {
            i = i - 1;
            n = n - 1;
        }
    }
    for (k = 0; k < n - 1; k++) {
        cout << a[k] << " ";
    }
    cout << a[n - 1] << endl;
    return 0;
}

