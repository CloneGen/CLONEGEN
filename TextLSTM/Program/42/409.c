int main () {
    int a [100002], n, i, k, p, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1, p = n; i <= p; i++) {
        if (k == a[i]) {
            p--;
            for (j = i; j <= p; j++)
                a[j] = a[j + 1];
            i--;
        }
    }
    for (i = 1, p--; i <= p; i++)
        cout << a[i] << ' ';
    cout << a[i] << endl;
    return 0;
}

