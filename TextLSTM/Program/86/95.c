int main () {
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        int m, a [20] = {0};
        cin >> m;
        for (int j = 1;
        j <= m; j++)
            cin >> a[j];
        if (a[m] + 3 * m < 60)
            cout << 60 - 3 * m << endl;
        else {
            for (int j = 1;
            j <= m; j++) {
                if (a[j] + 3 * (j - 1) > 60) {
                    cout << 60 - 3 * (j - 1) << endl;
                    break;
                }
                else if (a[j] + 3 * j > 60) {
                    cout << a[j] << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

