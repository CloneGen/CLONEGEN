int main () {
    int year, month, day, n, i;
    scanf ("%d %d %d", &year, &month, &day);
    if (year % 100 == 0)
        i = 400;
    else
        i = 4;
    if (month == 1)
        n = day;
    if (month == 2)
        n = 31 + day;
    if (month == 3) {
        if (year % i == 0)
            n = 31 + 29 + day;
        else
            n = 31 + 28 + day;
    }
    if (month == 4) {
        if (year % i == 0)
            n = 31 + 29 + 31 + day;
        else
            n = 31 + 28 + 31 + day;
    }
    if (month == 5) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + day;
        else
            n = 31 + 28 + 31 + 30 + day;
    }
    if (month == 6) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + day;
    }
    if (month == 7) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + 30 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + 30 + day;
    }
    if (month == 8) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
    }
    if (month == 9) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
    }
    if (month == 10) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    }
    if (month == 11) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    }
    if (month == 12) {
        if (year % i == 0)
            n = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
        else
            n = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
    }
    printf ("%d", n);
    return 0;
}

