int main () {
    int year, month, day, D;
    scanf ("%d%d%d", &year, &month, &day);
    if (month == 1) {
        D = day;
    }
    if (month == 2) {
        D = day + 31;
    }
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        if (month == 3) {
            D = day + 31 + 29;
        }
        if (month == 4) {
            D = day + 31 + 29 + 31;
        }
        if (month == 5) {
            D = day + 31 + 29 + 31 + 30;
        }
        if (month == 6) {
            D = day + 31 + 29 + 31 + 30 + 31;
        }
        if (month == 7) {
            D = day + 31 + 29 + 31 + 30 + 31 + 30;
        }
        if (month == 8) {
            D = day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
        }
        if (month == 9) {
            D = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
        }
        if (month == 10) {
            D = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        }
        if (month == 11) {
            D = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        }
        if (month == 12) {
            D = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        }
    }
    else {
        if (month == 3) {
            D = day + 31 + 28;
        }
        if (month == 4) {
            D = day + 31 + 28 + 31;
        }
        if (month == 5) {
            D = day + 31 + 28 + 31 + 30;
        }
        if (month == 6) {
            D = day + 31 + 28 + 31 + 30 + 31;
        }
        if (month == 7) {
            D = day + 31 + 28 + 31 + 30 + 31 + 30;
        }
        if (month == 8) {
            D = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
        }
        if (month == 9) {
            D = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        }
        if (month == 10) {
            D = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        }
        if (month == 11) {
            D = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        }
        if (month == 12) {
            D = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        }
    }
    printf ("%d\n", D);
    return 0;
}

