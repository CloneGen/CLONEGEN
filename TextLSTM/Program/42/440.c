int main () {
    int n, i, j, k;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] == k) {
            j = i;
            for (; i < n; i++) {
                a[i] = a[i + 1];
            }
            n--;
            i = j - 1;
        }
    }
    for (i = 0; i < n; i++) {
        if (i < n - 1)
            cout << a[i] << " ";
        else
            cout << a[i];
    }
    return 0;
}

