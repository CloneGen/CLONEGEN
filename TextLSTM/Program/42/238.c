int main () {
    int n, i, k, num, t = 0;
    cin >> n;
    cout << endl;
    int a [n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << endl;
    cin >> num;
    cout << endl;
    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            t++;
            for (k = i; k < n; k++) {
                a[k] = a[k + 1];
            }
            i--;
        }
    }
    for (i = 0; i < n - t - 1; i++)
        cout << a[i] << " ";
    cout << a[i];
    return 0;
}

