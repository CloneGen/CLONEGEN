int main () {
    int n = 0, k = 0, i = 0, j = 0, a [1001], s = 0;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (a[i] + a[j] == k) {
                s = s + 1;
            }
        }
    }
    if (s == 0)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
    return 0;
}

