int main () {
    int n, j, i, m, all = 0, a [1000];
    cin >> n;
    for (j = 1; j <= n; j++) {
        cin >> m;
        if (m == 0)
            cout << "60" << endl;
        else {
            for (i = 1; i <= m; i++)
                cin >> a[i];
            for (i = 1; i <= m; i++) {
                if (a[i] + 3 * i - 3 <= 60)
                    all = a[i];
                if ((a[i] + 3 * i - 3 > 60) && (all + 3 * i - 3 <= 60)) {
                    all = 63 - 3 * i;
                    break;
                }
            }
            if (all + 3 * m <= 60)
                cout << (60 - 3 * m) << endl;
            else
                cout << all << endl;
        }
    }
    return 0;
}

