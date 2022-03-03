int main () {
    int n = 0;
    cin >> n;
    int a [100001];
    int i = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    i = 0;
    int count = 0, j = 0;
    while (i < n) {
        if (a[i] == k) {
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            count = count + 1;
        }
        else
            i++;
    }
    for (i = 0; i < (n - count - 1); i++) {
        cout << a[i] << " ";
    }
    cout << a[n - count - 1] << endl;
    return 0;
}

