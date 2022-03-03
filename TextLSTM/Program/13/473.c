int main () {
    int n, i, j, k = 0, a [20000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++)
            if (a[j] == a[i]) {
                a[i] = -1;
                break;
            }
    }
    cout << a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > 0)
            cout << " " << a[i];
    }
    return 0;
}

