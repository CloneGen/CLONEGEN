int main () {
    int n, i, j, day1 = 0, day2 = 0, D, year, month1, month2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &year, &month1, &month2);
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            for (j = 1; j < month1; j++) {
                if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10) {
                    day1 = day1 + 31;
                }
                if (j == 2) {
                    day1 = day1 + 29;
                }
                if (j == 4 || j == 6 || j == 9 || j == 11) {
                    day1 = day1 + 30;
                }
            }
            for (j = 1; j < month2; j++) {
                if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10) {
                    day2 = day2 + 31;
                }
                if (j == 2) {
                    day2 = day2 + 29;
                }
                if (j == 4 || j == 6 || j == 9 || j == 11) {
                    day2 = day2 + 30;
                }
            }
        }
        else {
            for (j = 1; j < month1; j++) {
                if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10) {
                    day1 = day1 + 31;
                }
                if (j == 2) {
                    day1 = day1 + 28;
                }
                if (j == 4 || j == 6 || j == 9 || j == 11) {
                    day1 = day1 + 30;
                }
            }
            for (j = 1; j < month2; j++) {
                if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10) {
                    day2 = day2 + 31;
                }
                if (j == 2) {
                    day2 = day2 + 28;
                }
                if (j == 4 || j == 6 || j == 9 || j == 11) {
                    day2 = day2 + 30;
                }
            }
        }
        D = day1 - day2;
        if (D < 0) {
            D = 0 - D;
        }
        if (D % 7 == 0) {
            printf ("YES\n");
        }
        if (D % 7 != 0) {
            printf ("NO\n");
        }
        day1 = 0;
        day2 = 0;
    }
    return 0;
}

