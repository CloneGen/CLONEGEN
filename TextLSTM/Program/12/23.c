int main () {
    int a [17], i, j, k, n;
    cin >> a[1];
    while (a[1] != -1) {
        n = 0;
        i = 1;
        while (a[i] != 0) {
            i++;
            cin >> a[i];
        }
        for (j = 1; j <= i; j++) {
            for (k = 1; k <= i; k++) {
                if (a[j] == a[k] * 2) {
                    n++;
                }
            }
        }
        n = n - 1;
        cout << n << endl;
        cin >> a[1];
    }
    return 0;
}

