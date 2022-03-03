int main () {
    int n, k, num, i, p = 0;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> num;
        a[i] = num;
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] != k) {
            if (p == 1)
                cout << " ";
            cout << a[i];
            p = 1;
        }
    }
    return 0;
}

