int main () {
    int a [100000] = {0}, n, s, i, j;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> s;
    a[n] = s;
    for (i = 0; i < n; i++) {
        if (a[i] == s)
            for (j = i + 1; j < n; j++) {
                if (a[j] != s) {
                    a[i] = a[j];
                    a[j] = s;
                    break;
                }
            }
    }
    for (i = 0; i < n; i++) {
        if (a[i] == s)
            break;
        cout << a[i];
        if (a[i + 1] != s)
            cout << " ";
    }
    return 0;
}

