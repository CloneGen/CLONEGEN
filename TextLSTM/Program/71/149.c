int main () {
    int n, year, m1, m2, i, j, days;
    int a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> year >> m1 >> m2;
        a[1] = 28;
        days = 0;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            a[1] = 29;
        if (m1 < m2) {
            for (j = m1 - 1; j <= m2 - 2; j++)
                days = days + a[j];
        }
        else {
            for (j = m2 - 1; j <= m1 - 2; j++)
                days = days + a[j];
        }
        if (days % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

