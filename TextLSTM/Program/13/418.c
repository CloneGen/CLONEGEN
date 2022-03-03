int main () {
    int n, i = 0, j = 0, k = 0, step = 0;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1 - step; i++) {
        for (j = i + 1; j < n - step; j++) {
            if (a[i] == a[j]) {
                if (j == n - 1 - step) {
                    step++;
                    continue;
                }
                for (k = j; k < n - 1 - step; k++)
                    a[k] = a[k + 1];
                step++;
                j--;
            }
        }
    }
    for (i = 0; i < n - step - 1; i++)
        cout << a[i] << ' ';
    cout << a[n - 1 - step] << endl;
    return 0;
}

