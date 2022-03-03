int main () {
    int startyear, startmonth, startday, endyear, endmonth, endday;
    int total, i, j;
    int A [12], B [12];
    A[0] = 31;
    A[1] = 28;
    A[2] = 31;
    A[3] = 30;
    A[4] = 31;
    A[5] = 30;
    A[6] = 31;
    A[7] = 31;
    A[8] = 30;
    A[9] = 31;
    A[10] = 30;
    A[11] = 31;
    B[0] = 31;
    B[1] = 29;
    B[2] = 31;
    B[3] = 30;
    B[4] = 31;
    B[5] = 30;
    B[6] = 31;
    B[7] = 31;
    B[8] = 30;
    B[9] = 31;
    B[10] = 30;
    B[11] = 31;
    scanf ("%d%d%d", &startyear, &startmonth, &startday);
    scanf ("%d%d%d", &endyear, &endmonth, &endday);
    total = 0;
    for (i = startyear; i < endyear; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            total = total + 366;
        }
        else {
            total = total + 365;
        }
    }
    if (endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0) {
        if (endmonth >= startmonth) {
            for (j = startmonth; j < endmonth; j++) {
                total = total + B[j - 1];
            }
            total = total + endday - startday;
            printf ("%d", total);
        }
        if (endmonth < startmonth) {
            for (j = startmonth; j > endmonth; j--) {
                total = total - B[j - 2];
            }
            total = total + endday - startday;
            printf ("%d", total);
        }
    }
    else {
        if (endmonth >= startmonth) {
            for (j = startmonth; j < endmonth; j++) {
                total = total + A[j - 1];
            }
            total = total + endday - startday;
            printf ("%d", total);
        }
        if (endmonth < startmonth) {
            for (j = startmonth; j > endmonth; j--) {
                total = total - A[j - 2];
            }
            total = total + endday - startday;
            printf ("%d", total);
        }
    }
    return 0;
}

