int main () {
    int a [100000];
    int n, i, j, k, count = 0;
    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i <= n - 1;) {
        if (a[i] == k) {
            count = count + 1;
            for (j = i; j <= n - 2; j++) {
                a[j] = a[j + 1];
            }
            if (count + i == n)
                break;
        }
        else {
            i++;
            if (count + i == n)
                break;
        }
    }
    if (count != n) {
        cout << a[0];
        for (i = 1; i <= n - 1 - count; i++) {
            cout << ' ' << a[i];
        }
    }
    return 0;
}

