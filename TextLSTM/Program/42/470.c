int main () {
    int a [100005], n, k, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    i = 0;
    while (i < n) {
        if (a[i] == k) {
            for (int j = i;
            j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
        }
        else {
            i++;
        }
    }
    cout << a[0];
    for (i = 1; i < n; i++) {
        cout << " " << a[i];
    }
    return 0;
}

