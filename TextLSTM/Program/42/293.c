int main () {
    int n, i, k, j, sum = 0, p = 0, t;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (j = 0; j < n; j++) {
        if (k != a[j]) {
            if (p != 0)
                cout << " ";
            cout << a[j];
            p++;
        }
    }
    return 0;
}

