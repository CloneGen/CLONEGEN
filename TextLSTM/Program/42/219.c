int main () {
    int n = 0, k = 0, a [100000], i = 0, x = 0;
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i <= n - 1; i++) {
        if (a[i] != k)
            if (x != 1) {
                cout << a[i];
                x = 1;
            }
            else
                cout << " " << a[i];
    }
    return 0;
}

