int main () {
    int n, a [20001], i, j, b = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cout << a[1];
    for (i = 2; i <= n; i++) {
        for (b = 0, j = 1; j < i; j++) {
            if (a[i] != a[j])
                b = b + 1;
        }
        if (b == i - 1)
            cout << " " << a[i];
    }
    return 0;
}

