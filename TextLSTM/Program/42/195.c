int main () {
    int n, k, p, q;
    cin >> n;
    int a [n - 1];
    for (int i = 0;
    i <= n - 1; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0;
    i <= n - 1;) {
        if (a[i] == k) {
            for (int m = i;
            m <= n - 1; m++) {
                a[m] = a[m + 1];
            }
            n--;
        }
        if (a[i] != k)
            i++;
    }
    for (int i = 0;
    i <= n - 1; i++) {
        if (i < n - 1)
            cout << a[i] << " ";
        else
            cout << a[i] << endl;
    }
    return 0;
}

