int main () {
    int n, num;
    cin >> n;
    int i = 1;
    for (i = 1; i <= n; i++) {
        int m;
        cin >> m;
        int a [60];
        if (m == 0)
            cout << "60" << endl;
        else {
            int j = 1;
            for (j = 1; j <= m; j++) {
                cin >> a[j];
                if ((a[j] + 3 * j) >= 60 & (a[j] + 3 * j) <= 63)
                    num = a[j];
                else if (((a[j - 1] + 3 * (j - 1)) < 60) & (a[j] + 3 * j) > 63)
                    num = (63 - 3 * j);
                else if ((a[j] + 3 * j) < 60) {
                    num = (60 - 3 * j);
                    continue;
                }
            }
            cout << num << endl;
        }
    }
}

