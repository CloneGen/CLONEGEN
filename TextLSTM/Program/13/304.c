int main () {
    int n, i, j, k, t = 0;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
        if (a[i] >= 0)
            for (j = i + 1; j < n; j++)
                if (a[i] == a[j])
                    a[j] = -1;
    for (i = 0; i < n; i++)
        if (a[i] >= 0) {
            if (i > 0)
                cout << ' ';
            cout << a[i];
        }
    cout << endl;
    return 0;
}

