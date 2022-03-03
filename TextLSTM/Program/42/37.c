int main () {
    int n, i, a [100001], k, c;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
    cin >> k;
    c = 0;
    for (i = 0; i <= n - 1; i++) {
        if (k != a[i]) {
            c = c + 1;
            if (c == 1)
                cout << a[i];
            else
                cout << " " << a[i];
        }
    }
    return 0;
}

