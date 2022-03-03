int main () {
    int n, i, j;
    cin >> n;
    int year, mon1, mon2, days, m;
    int a [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (i = 1; i <= n; i++) {
        cin >> year >> mon1 >> mon2;
        days = 0;
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
            a[2] = 29;
        else
            a[2] = 28;
        if (mon1 > mon2)
            m = mon1, mon1 = mon2, mon2 = m;
        else
            mon1 = mon1, mon2 = mon2;
        for (j = 0; j < (mon2 - mon1); j++)
            days += a[mon1 + j];
        if (days % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

