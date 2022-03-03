int main () {
    int n;
    long number, k;
    cin >> n;
    int a [100000] = {0};
    int i, m, p, q, x = 0;
    for (i = 0; i < n; i++) {
        cin >> number;
        a[i] = number;
    }
    cin >> k;
    for (m = 0; m < n; m++) {
        if (a[m] == k) {
            for (p = m + 1; p < n; p++)
                a[p - 1] = a[p];
            m--;
            n--;
        }
    }
    for (q = 0; q < n; q++) {
        cout << a[q];
        if (q == n - 1)
            cout << endl;
        else
            cout << ' ';
    }
    return 0;
}

