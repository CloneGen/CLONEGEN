int main () {
    int n, i, j, k, num = 0;
    cin >> n;
    const  int N = n;
    int a [N];
    for (i = 0; i < n; ++i)
        cin >> a[i];
    cin >> k;
    i = j = 0;
    while (j < n) {
        while (a[j] == k) {
            ++j;
            ++num;
        }
        a[i] = a[j];
        ++i;
        ++j;
    }
    cout << a[0];
    for (j = 1; j < n - num; ++j)
        cout << " " << a[j];
    return 0;
}

