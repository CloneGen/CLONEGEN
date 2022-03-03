int main () {
    int year, month1, month2, month, leap, days, n, k;
    cin >> n;
    for (k = 0; k < n; k++) {
        days = 0;
        cin >> year >> month1 >> month2;
        leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
        if (month1 < month2)
            month = month1;
        else {
            month = month2;
            month2 = month1;
        }
        while (month < month2) {
            switch (month) {
            case 2 :
                days += 28 + leap;
                break;
            case 1 :
            case 3 :
            case 5 :
            case 7 :
            case 8 :
            case 10 :
            case 12 :
                days += 31;
                break;
            case 4 :
            case 6 :
            case 9 :
            case 11 :
                days += 30;
                break;
            }
            month++;
        }
        if (days % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

