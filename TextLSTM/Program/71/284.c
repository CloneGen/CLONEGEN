int main () {
    int d [12];
    d[0] = 0;
    d[1] = 31;
    d[2] = 28;
    d[3] = 31;
    d[4] = 30;
    d[5] = 31;
    d[6] = 30;
    d[7] = 31;
    d[8] = 31;
    d[9] = 30;
    d[10] = 31;
    d[11] = 30;
    int n, i, y, m1, m2, j1, j2, day1, day2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        day1 = 0;
        day2 = 0;
        scanf ("%d %d %d", &y, &m1, &m2);
        if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0))) {
            d[2] = 29;
            for (j1 = 0; j1 < m1; j1++)
                day1 = day1 + d[j1];
            for (j2 = 0; j2 < m2; j2++)
                day2 = day2 + d[j2];
            if (day2 > day1) {
                day2 = day2 + day1;
                day1 = day2 - day1;
                day2 = day2 - day1;
            }
            if ((day1 - day2) % 7 == 0) {
                printf ("YES");
                if (i != n - 1)
                    printf ("\n");
            }
            else {
                printf ("NO");
                if (i != n - 1)
                    printf ("\n");
            }
        }
        else {
            d[2] = 28;
            for (j1 = 0; j1 < m1; j1++)
                day1 = day1 + d[j1];
            for (j2 = 0; j2 < m2; j2++)
                day2 = day2 + d[j2];
            if (day2 > day1) {
                day2 = day2 + day1;
                day1 = day2 - day1;
                day2 = day2 - day1;
            }
            if ((day1 - day2) % 7 == 0) {
                printf ("YES");
                if (i != n - 1)
                    printf ("\n");
            }
            else {
                printf ("NO");
                if (i != n - 1)
                    printf ("\n");
            }
        }
    }
}

