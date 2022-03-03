int main () {
    int n, a [100000], k, i, j;
    j = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++)
        if (a[i] != k) {
            a[j] = a[i];
            j = j + 1;
        }
    cout << a[0];
    if (j > 1)
        for (i = 1; i <= j - 1; i++)
            cout << " " << a[i];
    cout << endl;
    return 0;
}

