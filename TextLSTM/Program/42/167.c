int main () {
    int n, k, i, j, m, x, count;
    count = 0;
    int a [100000] = {0};
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    for (j = 0; j <= n - 1; j++) {
        if (a[j] == k)
            count++;
        else
            a[j - count] = a[j];
    }
    x = 0;
    cout << a[x];
    for (x = 1; x <= n - count - 1; x++)
        cout << " " << a[x];
    cout << endl;
    return 0;
}

