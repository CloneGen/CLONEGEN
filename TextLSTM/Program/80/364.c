int DateToDay (int year, int month, int day) {
    int a [] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    int b [] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
    int d1, d2, d3;
    int leap;
    leap = ((year - 1) / 4) - ((year - 1) / 100) + ((year - 1) / 400);
    d1 = leap * 366 + (year - 1 - leap) * 365;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        d2 = b[month - 1];
    else
        d2 = a[month - 1];
    d3 = day;
    return d1 + d2 + d3;
}

int main () {
    int starty, startm, startd;
    int endy, endm, endd;
    int distance;
    cin >> starty >> startm >> startd;
    cin >> endy >> endm >> endd;
    distance = DateToDay (endy, endm, endd) - DateToDay (starty, startm, startd);
    cout << distance << endl;
    return 0;
}

