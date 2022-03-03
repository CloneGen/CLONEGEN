int month [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int startYear, startMonth, startDay, endYear, endMonth, endDay;

void main () {
    scanf ("%d %d %d", &startYear, &startMonth, &startDay);
    scanf ("%d %d %d", &endYear, &endMonth, &endDay);
    int f (int), h1 (int), h2 (int), g (int, int);
    int i, sum = 0, result;
    if (startYear != endYear) {
        for (i = startYear + 1; i < endYear; i++)
            if (f (i) == 1)
                sum = sum + 1;
        result = 365 - g (startMonth, startDay) + (f (startYear) && h1 (startMonth)) + (endYear - startYear - 1) * 365 + sum + g (endMonth, endDay) + (f (endYear) && h2 (endMonth));
    }
    else {
        result = g (endMonth, endDay) - g (startMonth, startDay) + (f (startYear) && h1 (startMonth) && h2 (endMonth));
    };
    printf ("%d", result);
}

int f (int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int h1 (int mon) {
    return (mon <= 2);
}

int h2 (int mont) {
    return (mont > 2);
}

int g (int m, int d) {
    int i, fromto = 0;
    for (i = 1; i < m; i++) {
        fromto = fromto + month[i];
    }
    return (fromto + d);
}

