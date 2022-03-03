int day1 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int day2 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int bissextile (int year) {
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int relative (int month1, int month2, int year) {
    int days = 0;
    if (bissextile (year))
        for (int i = month1;
        i < month2; i++)
            days = days + day2[i];
    else
        for (int i = month1;
        i < month2; i++)
            days = days + day1[i];
    if (days % 7 == 0)
        return 1;
    else
        return 0;
}

int main () {
    int n, year, month1, month2, relation;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        cin >> year >> month1 >> month2;
        if (month1 < month2)
            relation = relative (month1, month2, year);
        else if (month1 > month2)
            relation = relative (month2, month1, year);
        else
            relation = 1;
        if (relation)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

