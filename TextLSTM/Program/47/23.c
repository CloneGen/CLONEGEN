int main () {
    int n, i, j, temp, a [200];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++) {
            temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    for (i = 0; i < n; i++)
        cout << a[i] << (i < (n - 1) ? " " : "\n");
    return 0;
}

