int main () {
    int n, rem, mon1, mon2, i, k, year, mon, sum, j;
    int a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b [200];
    cin >> n;
    for (i = 0; i < n; i++) {
        sum = 0;
        cin >> year >> mon1 >> mon2;
        if (mon2 < mon1) {
            mon = mon2;
            mon2 = mon1;
            mon1 = mon;
        }
        if (year % 400 == 0) {
            a[1] = 29;
        }
        else if ((year % 4 == 0) && (year % 100 != 0)) {
            a[1] = 29;
        }
        else {
            a[1] = 28;
        }
        if (mon1 == mon2) {
            b[i] = 1;
        }
        for (j = mon1; j < mon2; j++) {
            sum = sum + a[j - 1];
        }
        rem = sum % 7;
        if (rem == 0) {
            b[i] = 1;
        }
        else {
            b[i] = 0;
        }
    }
    for (k = 0; k < n; k++) {
        if (b[k] == 1) {
            cout << "YES" << endl;
        }
        else if (b[k] == 0) {
            cout << "NO" << endl;
        }
    }
    return 0;
}

