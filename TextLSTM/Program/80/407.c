void main () {
    int s = 0, i;
    struct  Date {
        int year;
        int month;
        int day;
    }
    date1, date2;
    scanf ("%d%d%d", &date1.year, &date1.month, &date1.day);
    scanf ("%d%d%d", &date2.year, &date2.month, &date2.day);
    s += (date2.year - date1.year) * 365;
    s += (date2.month - date1.month) * 30;
    s += (date2.day - date1.day);
    for (i = date1.year; i < date2.year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            s++;
    }
    if (date2.month >= date1.month) {
        for (i = date1.month; i < date2.month; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                s++;
            if (i == 2) {
                if ((date2.year % 4 == 0 && date2.year % 100 != 0) || (date2.year % 400 == 0))
                    s--;
                else
                    s = s - 2;
            }
        }
    }
    else {
        for (i = date2.month; i < date1.month; i++) {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                s--;
            if (i == 2) {
                if ((date2.year % 4 == 0 && date2.year % 100 != 0) || (date2.year % 400 == 0))
                    s++;
                else
                    s = s + 2;
            }
        }
    }
    printf ("%d", s);
}

