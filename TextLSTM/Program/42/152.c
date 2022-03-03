int main () {
    int n, k, i, j, m = 0, count = 0, a [100000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0, j = 0; j < n; j++) {
        if (a[j] != k)
            a[i++] = a[j];
        else
            count++;
    }
    for (j = 0; j < n - count; j++) {
        if (m != 0) {
            cout << " ";
        }
        cout << a[j];
        m = 1;
    }
    cout << endl;
    return 0;
}

