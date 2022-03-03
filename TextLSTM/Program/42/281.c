int main () {
    int n, k;
    cin >> n;
    int a [n];
    for (int i = 0;
    i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    for (int j = 0;
    j <= n - 1; j++) {
        if (a[j] == k) {
            for (int m = j;
            m <= n - 2; m++)
                a[m] = a[m + 1];
            j = j - 1;
            n = n - 1;
        }
    }
    for (int p = 0;
    p <= n - 2; p++)
        cout << a[p] << " ";
    cout << a[n - 1] << endl;
    return 0;
}

