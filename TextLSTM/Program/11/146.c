int main (int argc, char *argv []) {
    int year, month, day;
    int real;
    scanf ("%d%d%d", &year, &month, &day);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        if (month == 1) {
            printf ("%d", day);
        }
        if (month == 2) {
            real = 31 + day;
            printf ("%d", real);
        }
        if (month == 3) {
            real = 31 + 29 + day;
            printf ("%d", real);
        }
        if (month == 4) {
            real = 31 + 29 + 31 + day;
            printf ("%d", real);
        }
        if (month == 5) {
            real = 31 * 2 + 30 + 29 + day;
            printf ("%d", real);
        }
        if (month == 6) {
            real = 31 * 3 + 30 + 29 + day;
            printf ("%d", real);
        }
        if (month == 7) {
            real = 31 * 3 + 30 * 2 + 29 + day;
            printf ("%d", real);
        }
        if (month == 8) {
            real = 31 * 4 + 30 * 2 + 29 + day;
            printf ("%d", real);
        }
        if (month == 9) {
            real = 31 * 5 + 30 * 2 + 29 + day;
            printf ("%d", real);
        }
        if (month == 10) {
            real = 31 * 5 + 30 * 3 + 29 + day;
            printf ("%d", real);
        }
        if (month == 11) {
            real = 31 * 6 + 30 * 3 + 29 + day;
            printf ("%d", real);
        }
        if (month == 12) {
            real = 31 * 6 + 30 * 4 + 29 + day;
            printf ("%d", real);
        }
    }
    else {
        if (month == 1) {
            printf ("%d", day);
        }
        if (month == 2) {
            real = 31 + day;
            printf ("%d", real);
        }
        if (month == 3) {
            real = 31 + 28 + day;
            printf ("%d", real);
        }
        if (month == 4) {
            real = 31 + 28 + 31 + day;
            printf ("%d", real);
        }
        if (month == 5) {
            real = 31 * 2 + 30 + 28 + day;
            printf ("%d", real);
        }
        if (month == 6) {
            real = 31 * 3 + 30 + 28 + day;
            printf ("%d", real);
        }
        if (month == 7) {
            real = 31 * 3 + 30 * 2 + 28 + day;
            printf ("%d", real);
        }
        if (month == 8) {
            real = 31 * 4 + 30 * 2 + 28 + day;
            printf ("%d", real);
        }
        if (month == 9) {
            real = 31 * 5 + 30 * 2 + 28 + day;
            printf ("%d", real);
        }
        if (month == 10) {
            real = 31 * 5 + 30 * 3 + 28 + day;
            printf ("%d", real);
        }
        if (month == 11) {
            real = 31 * 6 + 30 * 3 + 28 + day;
            printf ("%d", real);
        }
        if (month == 12) {
            real = 31 * 6 + 30 * 4 + 28 + day;
            printf ("%d", real);
        }
    }
    return 0;
}

