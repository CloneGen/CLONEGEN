int main () {
    int n, k, m, i, j, a [100001] = {0};
    cin >> n;
    m = n;
    for (i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
    cin >> k;
    i = 0;
    while (i <= n - 1) {
        if (a[i] == k) {
            for (j = i; j <= n - 1; j++) {
                a[j] = a[j + 1];
            }
            m = m - 1;
            i--;
        }
        i++;
    }
    for (i = 0; i <= m - 1; i++) {
        if (i == m - 1)
            cout << a[i] << endl;
        else
            cout << a[i] << " ";
    }
    return 0;
}

