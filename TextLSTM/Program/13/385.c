int main () {
    int i, j, n, a [20000];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n > 1) {
        for (i = 1; i < n; i++)
            for (j = 0; j < i; j++)
                if (a[i] == a[j])
                    a[i] = 0;
        cout << a[0];
        for (i = 1; i < n; i++) {
            if (a[i] != 0)
                cout << " " << a[i];
        }
    }
    if (n == 1)
        cout << a[0];
    return 0;
}

