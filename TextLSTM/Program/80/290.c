int main () {
    int year1, year2, month1, month2, date1, date2, Day = 0, Day1 = 0, Day2 = 0, i, numr = 0, nump;
    int Monthr [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Monthp [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> year1 >> month1 >> date1;
    cin >> year2 >> month2 >> date2;
    if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0)) {
        for (i = 1; i <= month1; i++)
            Day1 = Monthr[i] + Day1;
        Day1 = Day1 -(Monthr[month1] - date1) - 1;
    }
    else {
        for (i = 1; i <= month1; i++)
            Day1 = Monthp[i] + Day1;
        Day1 = Day1 -(Monthp[month1] - date1) - 1;
    }
    if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) {
        for (i = 12; i >= month2; i--)
            Day2 = Monthr[i] + Day2;
        Day2 = Day2 -date2;
    }
    else {
        for (i = 12; i >= month2; i--)
            Day2 = Monthp[i] + Day2;
        Day2 = Day2 -date2;
    }
    for (i = year1; i <= year2; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            numr++;
    }
    nump = year2 - year1 + 1 - numr;
    Day = 365 * nump + 366 * numr - Day1 -Day2-1;
    cout << Day << endl;
    return 0;
}

