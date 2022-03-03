int main () {
    long long year, month, day, sum = 0, week;
    cin >> year >> month >> day;
    int nian [3] = {0, 365, 366};
    int mon1 [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon2 [13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long long cycle = year / 400 - 1;
    long long remain = year - cycle * 400;
    sum += (365 * 400 + 25 * 4 - 3) * cycle;
    for (int i = 0;
    i < remain; i++) {
        if (i == 0)
            continue;
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            sum += nian[2];
        else
            sum += nian[1];
    }
    if ((remain % 4 == 0 && remain % 100 != 0) || remain % 400 == 0) {
        for (int i = 0;
        i < month; i++)
            sum += mon2[i];
        sum += day;
    }
    else {
        for (int i = 0;
        i < month; i++)
            sum += mon1[i];
        sum += day;
    }
    week = sum % 7;
    switch (week) {
    case (1) :
        cout << "Mon." << endl;
        break;
    case (2) :
        cout << "Tue." << endl;
        break;
    case (3) :
        cout << "Wed." << endl;
        break;
    case (4) :
        cout << "Thu." << endl;
        break;
    case (5) :
        cout << "Fri." << endl;
        break;
    case (6) :
        cout << "Sat." << endl;
        break;
    case (0) :
        cout << "Sun." << endl;
        break;
    }
    return 0;
}

