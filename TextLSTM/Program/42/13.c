int main () {
    int n, i, j;
    long k;
    long a [1000000];
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    i = 1;
    while (i <= n) {
        if (a[i] == k) {
            for (j = i; j <= n - 1; j++)
                a[j] = a[j + 1];
            n = n - 1;
            i = i - 1;
        }
        i = i + 1;
    }
    for (i = 1; i <= n - 1; i++)
        cout << a[i] << ' ';
    cout << a[n] << endl;
    return 0;
}

