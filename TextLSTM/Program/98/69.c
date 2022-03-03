int main () {
    int n, b [1000], d [1000];
    cin >> n;
    char a [200] [100];
    int i, j, k, lc, m;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        b[i] = strlen (a[i]);
    }
    int l;
    l = b[0];
    cout << a[0];
    for (i = 1; i < n - 1; i++) {
        l = l + 1 + b[i];
        if (l > 80) {
            cout << endl;
            cout << a[i];
            l = b[i];
        }
        else {
            cout << ' ' << a[i];
        }
    }
    l = l + 1 + b[n - 1];
    if (l <= 80)
        cout << ' ' << a[n - 1];
    else {
        cout << endl;
        cout << a[n - 1];
    }
    return 0;
}

