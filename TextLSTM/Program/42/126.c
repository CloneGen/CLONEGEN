int main () {
    int n;
    cin >> n;
    int n1 = n;
    int a [n];
    for (int i = 1;
    i <= n; i++)
        cin >> a[i];
    int b;
    cin >> b;
    int t = 1;
    for (int i = 1;
    t <= n; i++) {
        if (a[t] == b) {
            n1 = n1 - 1;
            for (int j = t;
            j <= n; j = j + 1)
                a[j] = a[j + 1];
            t = t - 1;
        }
        t = t + 1;
    }
    cout << a[1];
    for (int i = 2;
    i <= n1; i++)
        cout << " " << a[i];
    return 0;
}

