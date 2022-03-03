int main () {
    int n, i, j, k = 0, h = 0;
    cin >> n;
    int a [n], b [n];
    for (i = 0; i <= (n - 1); i++)
        cin >> a[i];
    for (i = 0; i <= (n - 1); i++) {
        if (a[i] != -1) {
            for (j = i + 1; j <= (n - 1); j++) {
                if (a[i] == a[j]) {
                    a[j] = -1;
                    k = k + 1;
                }
            }
        }
    }
    for (i = 0; i <= (n - 1); i++)
        b[i] = a[i];
    for (i = 0; i <= (n - 1); i++) {
        if (b[i] != -1) {
            cout << b[i];
            h++;
        }
        if (h == 1)
            break;
    }
    for (i = i + 1; i <= n - 1; i++) {
        if (b[i] != -1) {
            cout << " " << b[i];
            h++;
        }
        if (h == n - k)
            break;
    }
    return 0;
}

