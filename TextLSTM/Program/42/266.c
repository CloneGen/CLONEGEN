int main () {
    int n = 0, k = 0, a [150000], i = 0, j = 0, temp = 0, m = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    for (i = 0; i < n; i++) {
        if (a[i] != k)
            continue;
        else if (a[i] == k) {
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            m++;
            i--;
        }
    }
    for (i = 0; i < (n - m); i++) {
        if (i < (n - m - 1))
            cout << a[i] << " ";
        else if (i == (n - m - 1))
            cout << a[i] << endl;
    }
    return 0;
}

