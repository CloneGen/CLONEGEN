int main () {
    int s = 0, t = 0, a [100000] = {0};
    int n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i - 1];
    }
    cin >> k;
    for (j = 1; j <= n; j++) {
        if (a[j - 1] != k)
            t++;
    }
    for (j = 1; j <= n; j++) {
        if (a[j - 1] != k) {
            s++;
            if (s <= t - 1) {
                cout << a[j - 1] << " ";
            }
            else
                cout << a[j - 1];
        }
    }
    return 0;
}

