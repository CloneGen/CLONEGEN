int main () {
    int i = 1, n, j, r = 0, a [20001], b [101];
    cin >> n;
    memset (b, 1, sizeof (b));
    do {
        r = r + 1;
        cin >> j;
        if (b[j] != 0) {
            a[i] = j;
            b[a[i]] = 0;
            i = i + 1;
        }
    }
    while (r < n);
    for (j = 1; j < i - 1; j++)
        cout << a[j] << ' ';
    cout << a[i - 1];
    return 0;
}

