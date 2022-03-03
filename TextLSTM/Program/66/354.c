int main () {
    int year, month, day, year_real;
    int total = 0, i;
    scanf ("%d%d%d", &year_real, &month, &day);
    if (year_real % 400 != 0)
        year = year_real % 400;
    else
        year = 400;
    for (i = 1; i < year; i++) {
        if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
            total += 366;
        else
            total += 365;
    }
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        for (i = 1; i < month; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
                total += 31;
            else if (i == 2)
                total += 29;
            else
                total += 30;
        }
    }
    else
        for (i = 1; i < month; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
                total += 31;
            else if (i == 2)
                total += 28;
            else
                total += 30;
        }
    total += day;
    if (total % 7 == 1)
        printf ("Mon.");
    if (total % 7 == 2)
        printf ("Tue.");
    if (total % 7 == 3)
        printf ("Wed.");
    if (total % 7 == 4)
        printf ("Thu.");
    if (total % 7 == 5)
        printf ("Fri.");
    if (total % 7 == 6)
        printf ("Sat.");
    if (total % 7 == 0)
        printf ("Sun.");
    return 0;
}

