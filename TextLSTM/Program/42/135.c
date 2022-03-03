int main () {
    int n = 0, k = 0, i = 0, j = 0;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] != k) {
            a[j] = a[i];
            j++;
        }
    }
    for (int s = 0;
    s < j; s++) {
        if (s < j - 1)
            cout << a[s] << " ";
        if (s == j - 1)
            cout << a[s];
    }
    return 0;
}

