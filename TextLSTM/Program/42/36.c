int main () {
    int n, i = 0, p, k;
    cin >> n;
    p = n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k)
            p -= 1;
    }
    for (i = 0; i < n; i++) {
        if (a[i] != k) {
            p -= 1;
            if (p == 0)
                cout << a[i];
            else
                cout << a[i] << " ";
        }
    }
    return 0;
}

