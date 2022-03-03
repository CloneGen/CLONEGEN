int main () {
    int n = 0, flag [90];
    cin >> n;
    int a [n];
    for (int i = 0;
    i < n; i++) {
        cin >> a[i];
        flag[a[i] - 10] = 1;
    }
    for (int j = 0;
    j < n; j++) {
        if (flag[a[j] - 10]) {
            if (j) {
                cout << ' ' << a[j];
            }
            else {
                cout << a[j];
            }
        }
        flag[a[j] - 10] = 0;
    }
    return 0;
}

