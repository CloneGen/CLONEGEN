int main () {
    int n, i, j, temp;
    cin >> n;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
}

