int main () {
    int n, i, j, k, m, a [20000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (j = 0; j < n; j++) {
        for (k = j + 1; k < n; k++) {
            if (a[j] == a[k]) {
                for (m = k + 1; m < n; m++)
                    a[m - 1] = a[m];
                n -= 1;
                k -= 1;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    cout << a[n - 1];
    return 0;
}

