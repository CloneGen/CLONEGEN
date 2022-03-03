int main () {
    int n, i, j, k, m, count = 0, a [100001];
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1; i <= n - count; i++) {
        if (a[i] == k) {
            count++;
            for (j = i + 1; j <= n; j++) {
                if (a[j] == k) {
                    count++;
                }
                else {
                    for (m = i; m <= n - (j - i); m++) {
                        a[m] = a[m + j - i];
                    }
                    break;
                }
            }
        }
    }
    for (i = 1; i <= n - count; i++) {
        if (i < n - count)
            cout << a[i] << " ";
        if (i == n - count)
            cout << a[i] << endl;
    }
    return 0;
}

