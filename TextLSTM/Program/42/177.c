int main () {
    int n1 = 0, n = 0, a [100005], del = 0;
    cin >> n1;
    n = n1;
    for (int i = 1;
    i <= n; i++)
        cin >> a[i];
    cin >> del;
    int h = 1;
    do {
        if (a[h] == del) {
            for (int i = h + 1;
            i <= n; i++) {
                a[i - 1] = a[i];
            }
            n--;
            h--;
        }
        h++;
    }
    while (h <= n);
    for (int j = 1;
    j <= n - 1; j++)
        cout << a[j] << ' ';
    cout << a[n];
    return 0;
}

