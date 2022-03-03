int main () {
    int n = 0;
    cin >> n;
    int i = 0, j = 0;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[0];
    for (i = 1; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (a[i] == a[j])
                break;
        }
        if (i == j)
            cout << " " << a[i];
    }
    return 0;
}

