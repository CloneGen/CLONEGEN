main () {
    int year, month, day;
    scanf ("%d %d %d", &year, &month, &day);
    if (year % 400 == 0) {
        if (month == 1)
            printf ("%d", day);
        if (month == 2)
            printf ("%d", day + 31);
        if (month == 3)
            printf ("%d", day + 60);
        if (month == 4)
            printf ("%d", day + 91);
        if (month == 5)
            printf ("%d", day + 121);
        if (month == 6)
            printf ("%d", day + 152);
        if (month == 7)
            printf ("%d", day + 182);
        if (month == 8)
            printf ("%d", day + 213);
        if (month == 9)
            printf ("%d", day + 244);
        if (month == 10)
            printf ("%d", day + 274);
        if (month == 11)
            printf ("%d", day + 305);
        if (month == 12)
            printf ("%d", day + 335);
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        if (month == 1)
            printf ("%d", day);
        if (month == 2)
            printf ("%d", day + 31);
        if (month == 3)
            printf ("%d", day + 60);
        if (month == 4)
            printf ("%d", day + 91);
        if (month == 5)
            printf ("%d", day + 121);
        if (month == 6)
            printf ("%d", day + 152);
        if (month == 7)
            printf ("%d", day + 182);
        if (month == 8)
            printf ("%d", day + 213);
        if (month == 9)
            printf ("%d", day + 244);
        if (month == 10)
            printf ("%d", day + 274);
        if (month == 11)
            printf ("%d", day + 305);
        if (month == 12)
            printf ("%d", day + 335);
    }
    else {
        if (month == 1)
            printf ("%d", day);
        if (month == 2)
            printf ("%d", day + 31);
        if (month == 3)
            printf ("%d", day + 59);
        if (month == 4)
            printf ("%d", day + 90);
        if (month == 5)
            printf ("%d", day + 120);
        if (month == 6)
            printf ("%d", day + 151);
        if (month == 7)
            printf ("%d", day + 181);
        if (month == 8)
            printf ("%d", day + 212);
        if (month == 9)
            printf ("%d", day + 243);
        if (month == 10)
            printf ("%d", day + 273);
        if (month == 11)
            printf ("%d", day + 304);
        if (month == 12)
            printf ("%d", day + 334);
    }
}

