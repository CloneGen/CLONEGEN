int main () {
    int a [16];
    int i = 1, j, k, n = 0;
    while (cin) {
        cin >> a[0];
        if (a[0] == -1)
            break;
        for (i = 1;; i++) {
            cin >> a[i];
            if (a[i] == 0)
                break;
            k = i;
        }
        for (j = 0; j <= k - 1; j++) {
            for (i = j + 1; i <= k; i++) {
                if (a[j] * 2 == a[i] || a[i] * 2 == a[j])
                    n = n + 1;
            }
        }
        cout << n << endl;
        n = 0;
    }
    return 0;
}

