int main () {
    int n, i = 1, k;
    cin >> n;
    int a [20000];
    cin >> a[0];
    while (cin >> a[i]) {
        i++;
        if (i == n)
            break;
    }
    cout << a[0];
    i = 1;
    while (i < n) {
        int mid = 0;
        for (k = 0; k < i; k++) {
            if (a[i] == a[k]) {
                mid = 1;
                break;
            }
        }
        if (mid == 0)
            cout << " " << a[i];
        i++;
    }
    cout << "\n";
    return 0;
}

