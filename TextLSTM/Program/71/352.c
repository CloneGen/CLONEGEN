int main () {
    int n, year, m1, m2, d1 = 0, d2 = 0, i;
    int a [] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for (int j = 1;
    j <= n; j++) {
        cin >> year >> m1 >> m2;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            for (i = 0; i < m1 - 1; i++) {
                d1 += a[i];
            }
            for (i = 0; i < m2 - 1; i++) {
                d2 += a[i];
            }
        }
        else {
            for (i = 0; i < m1 - 1; i++) {
                d1 += b[i];
            }
            for (i = 0; i < m2 - 1; i++) {
                d2 += b[i];
            }
        }
        if ((d1 - d2) % 7 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        d1 = 0;
        d2 = 0;
    }
    return 0;
}

