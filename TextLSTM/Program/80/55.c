int main () {
    int y1, y2, m1, m2, d1, d2, i, j, k = 0, n, a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, b [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d %d %d", &y1, &m1, &d1);
    scanf ("%d %d %d", &y2, &m2, &d2);
    if (y2 == y1) {
        if (y1 % 400 == 0 || y1 % 4 == 0 && y1 % 100 != 0) {
            if (m1 == m2)
                printf ("%d", d2 - d1);
            else {
                if (m1 <= 2) {
                    for (i = m1; i < m2; i++) {
                        k += a[i - 1];
                    }
                    printf ("%d\n", k + d2 + 1 - d1);
                }
                else {
                    for (i = m1; i < m2; i++) {
                        k += a[i - 1];
                    }
                    printf ("%d\n", k + d2 + 1 - d1);
                }
            }
        }
        else {
            if (m1 == m2)
                printf ("%d\n", d2 - d1);
            else {
                for (i = m1; i < m2; i++) {
                    k += b[i - 1];
                }
                printf ("%d\n", k + d2 + 1 - d1);
            }
        }
    }
    else {
        if ((y2 - y1) == 1) {
            if (y1 % 400 == 0 || y1 % 4 == 0 && y1 % 100 != 0) {
                if (m1 <= 2) {
                    for (j = m1; j <= 12; j++) {
                        k += a[j - 1];
                    }
                    for (j = 1; j < m2; j++) {
                        k += b[j - 1];
                    }
                    printf ("%d\n", k + d2 + 1 - d1);
                }
            }
            else if (y2 % 400 == 0 || y2 % 4 == 0 && y2 % 100 != 0) {
                if (m2 < 2) {
                    for (i = m1; i <= 12; i++) {
                        k += b[i - 1];
                    }
                    printf ("%d\n", k + d2 + 1 - d1);
                }
                else {
                    for (i = m1; i <= 12; i++) {
                        k += b[i - 1];
                    }
                    for (i = 1; i < m2; i++) {
                        k += a[i - 1];
                    }
                    printf ("%d\n", k + d2 + 1 - d1);
                }
            }
        }
        else {
            for (i = y1 + 1; i < y2; i++) {
                if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
                    k += 366;
                else
                    k += 365;
            }
            if (y1 % 400 == 0 || y1 % 4 == 0 && y1 % 100 != 0) {
                if (y2 % 400 == 0 || y2 % 4 == 0 && y2 % 100 != 0) {
                    for (j = m1; j <= 12; j++) {
                        k += a[j - 1];
                    }
                    for (j = 1; j < m2; j++) {
                        k += a[j - 1];
                    }
                    printf ("%d\n", k + d2 - d1);
                }
                else {
                    for (j = m1; j <= 12; j++) {
                        k += b[j - 1];
                    }
                    for (j = 1; j < m2; j++) {
                        k += b[j - 1];
                    }
                    printf ("%d\n", k + d2 - d1);
                }
            }
            else {
                if (y2 % 400 == 0 || y2 % 4 == 0 && y2 % 100 != 0) {
                    for (j = m1; j <= 12; j++) {
                        k += b[j - 1];
                    }
                    for (j = 1; j < m2; j++) {
                        k += a[j - 1];
                    }
                    printf ("%d\n", k + d2 - d1);
                }
                else {
                    for (j = m1; j <= 12; j++) {
                        k += b[j - 1];
                    }
                    for (j = 1; j < m2; j++) {
                        k += a[j - 1];
                    }
                    printf ("%d\n", k + d2 - d1);
                }
            }
        }
    }
    return 0;
}

