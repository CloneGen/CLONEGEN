int main () {
    int year, month, day, num;
    scanf ("%d%d%d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        if (month == 1) {
            num = day;
            printf ("%d\n", num);
        }
        if (month == 2) {
            num = day + 31;
            printf ("%d\n", num);
        }
        if (month == 3) {
            num = day + 31 + 29;
            printf ("%d\n", num);
        }
        if (month == 4) {
            num = day + 31 + 29 + 31;
            printf ("%d\n", num);
        }
        if (month == 5) {
            num = day + 31 + 29 + 31 + 30;
            printf ("%d\n", num);
        }
        if (month == 6) {
            num = day + 31 + 29 + 31 + 30 + 31;
            printf ("%d\n", num);
        }
        if (month == 7) {
            num = day + 31 + 29 + 31 + 30 + 31 + 30;
            printf ("%d\n", num);
        }
        if (month == 8) {
            num = day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
            printf ("%d\n", num);
        }
        if (month == 9) {
            num = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            printf ("%d\n", num);
        }
        if (month == 10) {
            num = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            printf ("%d\n", num);
        }
        if (month == 11) {
            num = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf ("%d\n", num);
        }
        if (month == 12) {
            num = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf ("%d\n", num);
        }
    }
    else {
        if (month == 1) {
            num = day;
            printf ("%d\n", num);
        }
        if (month == 2) {
            num = day + 31;
            printf ("%d\n", num);
        }
        if (month == 3) {
            num = day + 31 + 28;
            printf ("%d\n", num);
        }
        if (month == 4) {
            num = day + 31 + 28 + 31;
            printf ("%d\n", num);
        }
        if (month == 5) {
            num = day + 31 + 28 + 31 + 30;
            printf ("%d\n", num);
        }
        if (month == 6) {
            num = day + 31 + 28 + 31 + 30 + 31;
            printf ("%d\n", num);
        }
        if (month == 7) {
            num = day + 31 + 28 + 31 + 30 + 31 + 30;
            printf ("%d\n", num);
        }
        if (month == 8) {
            num = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
            printf ("%d\n", num);
        }
        if (month == 9) {
            num = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            printf ("%d\n", num);
        }
        if (month == 10) {
            num = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            printf ("%d\n", num);
        }
        if (month == 11) {
            num = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            printf ("%d\n", num);
        }
        if (month == 12) {
            num = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            printf ("%d\n", num);
        }
    }
    return 0;
}

