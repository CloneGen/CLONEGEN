int main () {
    int i, j, k, n, count = 0, p;
    int a [100000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (j = 0; j < n; j++) {
        if (a[j] != k) {
            a[count] = a[j];
            count++;
        }
    }
    cout << a[0];
    for (p = 1; p < count; p++) {
        cout << " " << a[p];
    }
    return 0;
}

