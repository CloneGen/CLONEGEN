int main () {
    int n, day, i, j;
    int day0 [9] [9], day1 [9] [9], day2 [9] [9], day3 [9] [9], day4 [9] [9];
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            day0[i][j] = 0;
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            day1[i][j] = 0;
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            day2[i][j] = 0;
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            day3[i][j] = 0;
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            day4[i][j] = 0;
        }
    }
    scanf ("%d %d", &n, &day);
    day0[4][4] = n;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (day0[i][j] != 0) {
                day1[i - 1][j - 1] = 1 * day0[i][j];
                day1[i - 1][j - 0] = 1 * day0[i][j];
                day1[i - 1][j + 1] = 1 * day0[i][j];
                day1[i - 0][j - 1] = 1 * day0[i][j];
                day1[i - 0][j + 1] = 1 * day0[i][j];
                day1[i + 1][j - 1] = 1 * day0[i][j];
                day1[i + 1][j - 0] = 1 * day0[i][j];
                day1[i + 1][j + 1] = 1 * day0[i][j];
                day1[i][j] = 2 * day0[i][j];
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (day1[i][j] != 0) {
                day2[i - 1][j - 1] = 1 * day1[i][j] + day2[i - 1][j - 1];
                day2[i - 1][j - 0] = 1 * day1[i][j] + day2[i - 1][j - 0];
                day2[i - 1][j + 1] = 1 * day1[i][j] + day2[i - 1][j + 1];
                day2[i - 0][j - 1] = 1 * day1[i][j] + day2[i - 0][j - 1];
                day2[i - 0][j + 1] = 1 * day1[i][j] + day2[i - 0][j + 1];
                day2[i + 1][j - 1] = 1 * day1[i][j] + day2[i + 1][j - 1];
                day2[i + 1][j - 0] = 1 * day1[i][j] + day2[i + 1][j - 0];
                day2[i + 1][j + 1] = 1 * day1[i][j] + day2[i + 1][j + 1];
                day2[i][j] = 2 * day1[i][j] + day2[i][j];
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (day2[i][j] != 0) {
                day3[i - 1][j - 1] = 1 * day2[i][j] + day3[i - 1][j - 1];
                day3[i - 1][j - 0] = 1 * day2[i][j] + day3[i - 1][j - 0];
                day3[i - 1][j + 1] = 1 * day2[i][j] + day3[i - 1][j + 1];
                day3[i - 0][j - 1] = 1 * day2[i][j] + day3[i - 0][j - 1];
                day3[i - 0][j + 1] = 1 * day2[i][j] + day3[i - 0][j + 1];
                day3[i + 1][j - 1] = 1 * day2[i][j] + day3[i + 1][j - 1];
                day3[i + 1][j - 0] = 1 * day2[i][j] + day3[i + 1][j - 0];
                day3[i + 1][j + 1] = 1 * day2[i][j] + day3[i + 1][j + 1];
                day3[i][j] = 2 * day2[i][j] + day3[i][j];
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (day3[i][j] != 0) {
                day4[i - 1][j - 1] = 1 * day3[i][j] + day4[i - 1][j - 1];
                day4[i - 1][j - 0] = 1 * day3[i][j] + day4[i - 1][j - 0];
                day4[i - 1][j + 1] = 1 * day3[i][j] + day4[i - 1][j + 1];
                day4[i - 0][j - 1] = 1 * day3[i][j] + day4[i - 0][j - 1];
                day4[i - 0][j + 1] = 1 * day3[i][j] + day4[i - 0][j + 1];
                day4[i + 1][j - 1] = 1 * day3[i][j] + day4[i + 1][j - 1];
                day4[i + 1][j - 0] = 1 * day3[i][j] + day4[i + 1][j - 0];
                day4[i + 1][j + 1] = 1 * day3[i][j] + day4[i + 1][j + 1];
                day4[i][j] = 2 * day3[i][j] + day4[i][j];
            }
        }
    }
    if (day == 1) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 8; j++) {
                printf ("%d ", day1[i][j]);
            }
            printf ("%d\n", day1[i][8]);
        }
    }
    if (day == 2) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 8; j++) {
                printf ("%d ", day2[i][j]);
            }
            printf ("%d\n", day2[i][8]);
        }
    }
    if (day == 3) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 8; j++) {
                printf ("%d ", day3[i][j]);
            }
            printf ("%d\n", day3[i][8]);
        }
    }
    if (day == 4) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 8; j++) {
                printf ("%d ", day4[i][j]);
            }
            printf ("%d\n", day4[i][8]);
        }
    }
    return 0;
}

