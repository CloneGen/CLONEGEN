int main () {
    int a [100000] = {0};
    int n;
    int count = 0;
    int i, j;
    int num;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> num;
    for (i = 0; i < n - count; i++) {
        if (num == a[i]) {
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            count++;
            i = i - 1;
        }
    }
    for (i = 0; i != n - count; i++) {
        cout << a[i];
        if (i != n - count - 1)
            cout << " ";
    }
    return 0;
}

