int main () {
    int n, a [20001];
    cin >> n;
    for (int i = 0;
    i <= n - 1; i++)
        cin >> a[i];
    for (int j = 0;
    j <= n - 1; j++)
        for (int k = n - 1;
        k >= j + 1; k--) {
            if (a[j] == a[k])
                a[k] = 0;
        }
    cout << a[0];
    for (int m = 1;
    m <= n - 1; m++) {
        if (a[m] != 0)
            cout << " " << a[m];
    }
    return 0;
}

