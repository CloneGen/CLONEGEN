int main () {
    int n, i, j, k, num = 0;
    cin >> n;
    int a [100000];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k)
            num = num + 1;
        else
            a[i - num] = a[i];
    }
    for (j = 0; j < n - num; j++)
        if (j != n - num - 1)
            cout << a[j] << " ";
        else
            cout << a[j];
    return 0;
}

