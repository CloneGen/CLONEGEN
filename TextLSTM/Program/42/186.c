int main (void) {
    int n, a [100000];
    int k;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    cin >> k;
    for (int j = 0;
    j < n;) {
        if (a[j] == k) {
            n--;
            for (int x = j;
            x < n; x++)
                a[x] = a[x + 1];
        }
        else
            j++;
    }
    for (int y = 0;
    y < n - 1; y++) {
        cout << a[y] << ' ';
    }
    cout << a[n - 1] << endl;
    return 0;
}

