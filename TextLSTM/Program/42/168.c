int main () {
    int a [100000];
    int n, k, e = 0, d = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    cin >> k;
    for (int j = 0;
    j < n; j++)
        if (a[j] == k) {
            for (int p = j;
            p < (n - 1); p++)
                a[p] = a[p + 1];
            n--;
            j--;
        }
    cout << a[0];
    for (int q = 1;
    q < n; q++)
        cout << " " << a[q];
    return 0;
}

