int f (int year, int month, int day) {
    int x;
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        if (month == 1)
            x = day;
        if (month == 2)
            x = day + 31;
        if (month == 3)
            x = day + 31 + 29;
        if (month == 4)
            x = day + 31 + 29 + 31;
        if (month == 5)
            x = day + 31 + 29 + 31 + 30;
        if (month == 6)
            x = day + 31 + 29 + 31 + 30 + 31;
        if (month == 7)
            x = day + 31 + 29 + 31 + 30 + 31 + 30;
        if (month == 8)
            x = day + 31 + 29 + 31 + 30 + 31 + 30 + 31;
        if (month == 9)
            x = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
        if (month == 10)
            x = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        if (month == 11)
            x = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        if (month == 12)
            x = day + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    }
    else {
        if (month == 1)
            x = day;
        if (month == 2)
            x = day + 31;
        if (month == 3)
            x = day + 31 + 28;
        if (month == 4)
            x = day + 31 + 28 + 31;
        if (month == 5)
            x = day + 31 + 28 + 31 + 30;
        if (month == 6)
            x = day + 31 + 28 + 31 + 30 + 31;
        if (month == 7)
            x = day + 31 + 28 + 31 + 30 + 31 + 30;
        if (month == 8)
            x = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
        if (month == 9)
            x = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        if (month == 10)
            x = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        if (month == 11)
            x = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        if (month == 12)
            x = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    }
    return x;
}

main () {
    int n, i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        int year, month1, month2;
        scanf ("%d %d %d", &year, &month1, &month2);
        if ((f (year, month1, 1) - f (year, month2, 1)) % 7 == 0 || (f (year, month2, 1) - f (year, month1, 1)) % 7 == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
}

