int main () {
    int s1, s2, s3, e1, e2, e3, i, count = 0;
    scanf ("%d %d%d", &s1, &s2, &s3);
    scanf ("%d%d%d", &e1, &e2, &e3);
    if (s1 == e1) {
        if (s2 == e2) {
            count = e3 - s3;
        }
        if (s2 != e2) {
            if ((s1 % 4 == 0 && s1 % 100 != 0) || (s1 % 400 == 0)) {
                if (s2 == 1 || s2 == 3 || s2 == 5 || s2 == 7 || s2 == 8 || s2 == 10 || s2 == 12) {
                    count = count + 31 - s3;
                }
                if (s2 == 2) {
                    count = count + 29 - s3;
                }
                if (s2 == 4 || s2 == 6 || s2 == 9 || s2 == 11) {
                    count = count + 30 - s3;
                }
                for (i = s2 + 1; i < e2; i++) {
                    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                        count = count + 31;
                    }
                    if (i == 4 || i == 6 || i == 9 || i == 11) {
                        count = count + 30;
                    }
                    if (i == 2) {
                        count = count + 29;
                    }
                }
                count = count + e3;
            }
            else {
                if (s2 == 1 || s2 == 3 || s2 == 5 || s2 == 7 || s2 == 8 || s2 == 10 || s2 == 12) {
                    count = count + 31 - s3;
                }
                if (s2 == 2) {
                    count = count + 28 - s3;
                }
                if (s2 == 4 || s2 == 6 || s2 == 9 || s2 == 11) {
                    count = count + 30 - s3;
                }
                for (i = s2 + 1; i < e2; i++) {
                    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                        count = count + 31;
                    }
                    if (i == 4 || i == 6 || i == 9 || i == 11) {
                        count = count + 30;
                    }
                    if (i == 2) {
                        count = count + 28;
                    }
                }
                count = count + e3;
            }
        }
    }
    if (s1 != e1) {
        if ((s1 % 4 == 0 && s1 % 100 != 0) || (s1 % 400 == 0)) {
            for (i = 1; i < s2; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                    count = count + 31;
                }
                if (i == 4 || i == 6 || i == 9 || i == 11) {
                    count = count + 30;
                }
                if (i == 2) {
                    count = count + 29;
                }
            }
            count = 366 - count - s3;
        }
        if (s1 % 4 != 0 || (s1 % 100 == 0 && s1 % 400 != 0)) {
            for (i = 1; i < s2; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                    count = count + 31;
                }
                if (i == 4 || i == 6 || i == 9 || i == 11) {
                    count = count + 30;
                }
                if (i == 2) {
                    count = count + 28;
                }
            }
            count = 365 - count - s3;
        }
        for (i = s1 + 1; i < e1; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                count = count + 366;
            else
                count = count + 365;
        }
        if ((e1 % 4 == 0 && e1 % 100 != 0) || (e1 % 400 == 0)) {
            for (i = 1; i < e2; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                    count = count + 31;
                }
                if (i == 4 || i == 6 || i == 9 || i == 11) {
                    count = count + 30;
                }
                if (i == 2) {
                    count = count + 29;
                }
            }
            count = count + e3;
        }
        if (e1 % 4 != 0 || (e1 % 100 == 0 && e1 % 400 != 0)) {
            for (i = 1; i < e2; i++) {
                if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
                    count = count + 31;
                }
                if (i == 4 || i == 6 || i == 9 || i == 11) {
                    count = count + 30;
                }
                if (i == 2) {
                    count = count + 28;
                }
            }
            count = count + e3;
        }
    }
    printf ("%d", count);
    return 0;
}

