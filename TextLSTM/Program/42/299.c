int main () {
    int n, a [100000], k, count = 0, j = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    cin >> k;
    for (int i = 0;
    i < n; i++)
        if (a[i] != k)
            a[j++] = a[i];
        else
            count++;
    cout << a[0];
    for (int i = 1;
    i < n - count; i++)
        cout << ' ' << a[i];
    return 0;
}

