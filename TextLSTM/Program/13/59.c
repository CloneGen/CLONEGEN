int main () {
    int n, i, j = 2, m;
    int a [20010], b [100];
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    b[1] = a[1];
    for (i = 2; i <= n; i++) {
        for (m = 1; m <= i - 1; m++) {
            if (a[m] == a[i])
                break;
        }
        if (m == i) {
            b[j] = a[i];
            j++;
        }
    }
    for (i = 1; i <= j - 1; i++) {
        if (i < j - 1) {
            cout << b[i] << " ";
        }
        else
            cout << b[i];
    }
    return 0;
}

