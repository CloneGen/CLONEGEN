int main () {
    int n = 0, k = 0, p = 0;
    cin >> n;
    int a [(const  int) n];
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0;
    i < n; i++) {
        if (a[i] == k) {
            p++;
            for (int j = i;
            j < n; j++) {
                a[j] = a[j + 1];
            }
            i -= 1;
        }
    }
    cout << a[0];
    for (int i = 1;
    i < n - p; i++) {
        cout << ' ' << a[i];
    }
}

