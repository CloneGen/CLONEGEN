int main () {
    int n;
    int a [100000];
    int key;
    int count = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> a[i];
    cin >> key;
    for (int i = 0;
    i < n - count; i++) {
        if (a[i] == key) {
            for (int j = i;
            j < n - 1 - count; j++)
                a[j] = a[j + 1];
            count++;
            i = i - 1;
        }
    }
    for (int i = 0;
    i < n - count - 1; i++)
        cout << a[i] << " ";
    cout << a[n - count - 1];
    return 0;
}

