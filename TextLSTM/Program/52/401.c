int main () {
    int m, n, *q, i, a [101], j, k, l;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        cin >> a[i];
    q = a;
    for (i = 0; i < n - m; i++)
        *(q + n + i) = *(q + i);
    for (i = 0; i < n - 1; i++)
        cout << *(q + n - m + i) << ' ';
    cout << *(q + n + n - m - 1) << endl;
    return 0;
}

