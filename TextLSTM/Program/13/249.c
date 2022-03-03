int main () {
    int n, num;
    cin >> n;
    int a [n];
    for (num = 0; num <= (n - 1); num++) {
        cin >> a[num];
    }
    int i, k, q;
    cout << a[0];
    for (k = 1; k <= n - 1; k++) {
        q = 0;
        for (i = 0; i < k; i++) {
            if (a[k] == a[i]) {
                q++;
            }
        }
        if (q == 0) {
            cout << " " << a[k];
        }
    }
    return 0;
}

