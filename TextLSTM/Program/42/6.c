int main () {
    int a [100010], i = 0, n = 0, k = 0, j = 0, b = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 1; i <= n; i++) {
        if (a[i] == k) {
            b++;
            if (i != (n - b + 1)) {
                for (j = i; j <= (n - b); j++)
                    a[j] = a[j + 1];
                i--;
            }
            else
                break;
        }
    }
    cout << a[1];
    for (i = 2; i <= (n - b); i++)
        cout << " " << a[i];
    return 0;
}

