int main () {
    int n, i, j, k, m;
    int a [100000];
    cin >> n;
    for (i = 0; i <= n - 1; i++)
        cin >> a[i];
    cin >> k;
    for (m = 0, j = 0; m <= n - 1; m++) {
        if (a[m] != k) {
            a[j++] = a[m];
            if (j != 1)
                cout << ' ' << a[j - 1];
            else
                cout << a[j - 1];
        }
    }
    return 0;
}

