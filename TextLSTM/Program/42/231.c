int main () {
    int t;
    cin >> t;
    const  int n = t;
    int a [n];
    int i, j, k = 0;
    for (i = 0; i < n; i++)
        cin >> a[i];
    int num;
    cin >> num;
    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            k++;
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            a[j] = 0;
            i--;
        }
    }
    for (i = 0; i < n - k - 1; i++)
        cout << a[i] << " ";
    cout << a[i];
    return 0;
}

