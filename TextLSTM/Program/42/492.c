int main () {
    int n, k, a [100001];
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        cin >> a[i];
    }
    cin >> k;
    int temp;
    a[0] = k - 1;
    for (int j = 1;
    j <= n; j++) {
        if (a[j] == k) {
            continue;
        }
        else
            while (a[j - 1] == k) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
                j--;
            }
    }
    int whether = 0;
    int r = 1;
    do {
        if (whether)
            cout << " ";
        cout << a[r];
        whether = 1;
        r++;
    }
    while (a[r] != k && r <= n);
    return 0;
}

