int main (int argc, char *argv []) {
    int year, month, days;
    scanf ("%d %d %d", &year, &month, &days);
    int day;
    if (month == 1) {
        day = days;
    }
    if (month == 2) {
        day = 31 + days;
    }
    if (month == 3) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            day = 31 + 29 + days;
        else
            day = 31 + 28 + days;
    }
    if (month == 4) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + days;
        else
            day = 31 + 28 + 31 + days;
    }
    if (month == 5) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + days;
        else
            day = 31 + 28 + 31 + 30 + days;
    }
    if (month == 6) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 30 + 31 + 31 + days;
        else
            day = 31 + 28 + 30 + 31 + 31 + days;
    }
    if (month == 7) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + 31 + 30 + days;
        else
            day = 31 + 28 + 31 + 30 + 31 + 30 + days;
    }
    if (month == 8) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + 31 + 30 + 31 + days;
        else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + days;
    }
    if (month == 9) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + days;
        else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + days;
    }
    if (month == 10) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + days;
        else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + days;
    }
    if (month == 11) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + days;
        else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + days;
    }
    if (month == 12) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            day = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + days;
        else
            day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + days;
    }
    printf ("%d\n", day);
    return 0;
}

