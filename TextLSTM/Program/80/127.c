int main () {
    int startyear, endyear;
    int startmonth, endmonth;
    int startday, endday;
    int year, day, month;
    day = 0;
    scanf ("%d %d %d", &startyear, &startmonth, &startday);
    scanf ("%d %d %d", &endyear, &endmonth, &endday);
    if (startyear != endyear) {
        for (year = (startyear + 1); year < endyear; year++) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                day = day + 366;
            }
            else
                day = day + 365;
        }
        if ((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0)) {
            if (startmonth == 1)
                day = day + (31 - startday) + 29 + (31 * 6) + (30 * 4);
            if (startmonth == 2)
                day = day + (29 - startday) + (31 * 6) + (30 * 4);
            if (startmonth == 3)
                day = day + (31 - startday) + 30 * 4 + 31 * 5;
            if (startmonth == 4)
                day = day + (30 - startday) + 30 * 3 + 31 * 5;
            if (startmonth == 5)
                day = day + (31 - startday) + 30 * 3 + 31 * 4;
            if (startmonth == 6)
                day = day + (30 - startday) + 30 * 2 + 31 * 4;
            if (startmonth == 7)
                day = day + (31 - startday) + 30 * 2 + 31 * 3;
            if (startmonth == 8)
                day = day + (31 - startday) + 30 * 2 + 31 * 2;
            if (startmonth == 9)
                day = day + (30 - startday) + 30 + 31 * 2;
            if (startmonth == 10)
                day = day + (31 - startday) + 31 + 30;
            if (startmonth == 11)
                day = day + (30 - startday) + 31;
            if (startmonth == 12)
                day = day + (31 - startday);
        }
        else {
            if (startmonth == 1)
                day = day + (31 - startday) + 28 + (31 * 6) + (30 * 4);
            if (startmonth == 2)
                day = day + (28 - startday) + (31 * 6) + (30 * 4);
            if (startmonth == 3)
                day = day + (31 - startday) + 30 * 4 + 31 * 5;
            if (startmonth == 4)
                day = day + (30 - startday) + 30 * 3 + 31 * 5;
            if (startmonth == 5)
                day = day + (31 - startday) + 30 * 3 + 31 * 4;
            if (startmonth == 6)
                day = day + (30 - startday) + 30 * 2 + 31 * 4;
            if (startmonth == 7)
                day = day + (31 - startday) + 30 * 2 + 31 * 3;
            if (startmonth == 8)
                day = day + (31 - startday) + 30 * 2 + 31 * 2;
            if (startmonth == 9)
                day = day + (30 - startday) + 30 + 31 * 2;
            if (startmonth == 10)
                day = day + (31 - startday) + 31 + 30;
            if (startmonth == 11)
                day = day + (30 - startday) + 31;
            if (startmonth == 12)
                day = day + (31 - startday);
        }
        if ((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0)) {
            if (endmonth == 1)
                day = day + endday;
            if (endmonth == 2)
                day = day + endday + 31;
            if (endmonth == 3)
                day = day + endday + 31 + 29;
            if (endmonth == 4)
                day = day + endday + 31 * 2 + 29;
            if (endmonth == 5)
                day = day + endday + 31 * 2 + 30 + 29;
            if (endmonth == 6)
                day = day + endday + 31 * 3 + 30 + 29;
            if (endmonth == 7)
                day = day + endday + 31 * 3 + 30 * 2 + 29;
            if (endmonth == 8)
                day = day + endday + 31 * 4 + 30 * 2 + 29;
            if (endmonth == 9)
                day = day + endday + 31 * 5 + 30 * 2 + 29;
            if (endmonth == 10)
                day = day + endday + 31 * 5 + 30 * 3 + 29;
            if (endmonth == 11)
                day = day + endday + 31 * 6 + 30 * 3 + 29;
            if (endmonth == 12)
                day = day + endday + 31 * 6 + 30 * 4 + 29;
        }
        else {
            if (endmonth == 1)
                day = day + endday;
            if (endmonth == 2)
                day = day + endday + 31;
            if (endmonth == 3)
                day = day + endday + 31 + 28;
            if (endmonth == 4)
                day = day + endday + 31 * 2 + 28;
            if (endmonth == 5)
                day = day + endday + 31 * 2 + 30 + 28;
            if (endmonth == 6)
                day = day + endday + 31 * 3 + 30 + 28;
            if (endmonth == 7)
                day = day + endday + 31 * 3 + 30 * 2 + 28;
            if (endmonth == 8)
                day = day + endday + 31 * 4 + 30 * 2 + 28;
            if (endmonth == 9)
                day = day + endday + 31 * 5 + 30 * 2 + 28;
            if (endmonth == 10)
                day = day + endday + 31 * 5 + 30 * 3 + 28;
            if (endmonth == 11)
                day = day + endday + 31 * 6 + 30 * 3 + 28;
            if (endmonth == 12)
                day = day + endday + 31 * 6 + 30 * 4 + 28;
        }
    }
    else {
        if (startyear == endyear) {
            if ((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0)) {
                if (startmonth == endmonth)
                    day = endday - startday;
                else {
                    for (month = (startmonth + 1); month < endmonth; month++) {
                        if ((month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
                            day = day + 31;
                        else {
                            if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
                                day = day + 30;
                            else {
                                if (month == 2)
                                    day = day + 29;
                            }
                        }
                    }
                    if ((startmonth == 3) || (startmonth == 5) || (startmonth == 7) || (startmonth == 8) || (startmonth == 10) || (startmonth == 12))
                        day = day + (31 - startday) + endday;
                    else {
                        if ((startmonth == 4) || (startmonth == 6) || (startmonth == 9) || (startmonth == 11))
                            day = day + 30 - startday + endday;
                        else {
                            if (startmonth == 2)
                                day = day + 29 - startday + endday;
                        }
                    }
                }
            }
            else {
                if (startmonth == endmonth)
                    day = endday - startday;
                else {
                    for (month = (startmonth + 1); month < endmonth; month++) {
                        if ((month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
                            day = day + 31;
                        else {
                            if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
                                day = day + 30;
                            else {
                                if (month == 2)
                                    day = day + 28;
                            }
                        }
                    }
                    if ((startmonth == 3) || (startmonth == 5) || (startmonth == 7) || (startmonth == 8) || (startmonth == 10) || (startmonth == 12))
                        day = day + (31 - startday) + endday;
                    else {
                        if ((startmonth == 4) || (startmonth == 6) || (startmonth == 9) || (startmonth == 11))
                            day = day + 30 - startday + endday;
                        else {
                            if (startmonth == 2)
                                day = day + 28 - startday + endday;
                        }
                    }
                }
            }
        }
    }
    printf ("%d", day);
    return 0;
}

