int main () {
    int year [2], month [2], day [2], days = 0;
    int flag = 0, i, j;
    cin >> year[0] >> month[0] >> day[0] >> year[1] >> month[1] >> day[1];
    int leap_year [2] [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (i = year[0] + 1; i < year[1]; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            days += 366;
        else
            days += 365;
    }
    if (year[0] != year[1]) {
        for (i = month[0]; i < 12; i++) {
            if ((year[0] % 4 == 0 && year[0] % 100 != 0) || (year[0] % 400 == 0)) {
                days += leap_year[1][i];
                flag = 1;
            }
            else
                days += leap_year[0][i];
        }
        for (i = 0; i < month[1] - 1; i++) {
            if ((year[1] % 4 == 0 && year[1] % 100 != 0) || (year[1] % 400 == 0))
                days += leap_year[1][i];
            else
                days += leap_year[0][i];
        }
        days = days + day[1] + leap_year[flag][month[0] - 1] - day[0];
    }
    else if (month[0] != month[1]) {
        for (i = month[0]; i < month[1] - 1; i++) {
            if ((year[0] % 4 == 0 && year[0] % 100 != 0) || (year[0] % 400 == 0)) {
                days += leap_year[1][i];
                flag = 1;
            }
            else
                days += leap_year[0][i];
        }
        days = days + day[1] + leap_year[flag][month[0] - 1] - day[0];
    }
    else
        days = days + day[1] - day[0];
    cout << days << endl;
    return 0;
}

