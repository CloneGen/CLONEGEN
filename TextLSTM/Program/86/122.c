int main () {
    int n;
    int m, i, j;
    int t, tp;
    cin >> n;
    while (n--) {
        tp = 0;
        t = 0;
        j = 0;
        cin >> m;
        if (m)
            for (i = 1; i <= m; i++) {
                tp = t;
                cin >> t;
                if (t + 3 * i - 3 >= 60) {
                    t = tp;
                    if (j == 0)
                        j = i - 1;
                }
            }
        else {
            cout << 60 << endl;
            continue;
        }
        if (j == 0)
            j = i - 1;
        if (t + 3 * j - 3 <= 57)
            cout << 60 - 3 * j << endl;
        else
            cout << 60 + t % 3 - 3 * j << endl;
    }
    return 0;
}

