int main () {
    int n;
    cin >> n;
    while (n > 0) {
        int m;
        cin >> m;
        if (m == 0)
            cout << 60 << endl;
        else {
            int count [m];
            for (int i = 0;
            i < m; i++)
                cin >> count[i];
            while (1) {
                if (count[m - 1] + 3 * m <= 60) {
                    cout << 60 - 3 * m << endl;
                    break;
                }
                if (count[m - 1] + 3 * m >= 63) {
                    m--;
                    continue;
                }
                else {
                    cout << 60 - 3 * m + (count[m - 1] + 3 * m - 60) << endl;
                    break;
                }
            }
        }
        n--;
    }
    return 0;
}

