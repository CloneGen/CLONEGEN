int main () {
    int n, a [100000], del, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> del;
    for (i = 0; i < n; i++) {
        if (a[i] == del) {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n = n - 1;
            i = i - 1;
        }
    }
    cout << a[0];
    for (i = 1; i < n; i++)
        cout << " " << a[i];
    return 0;
}

