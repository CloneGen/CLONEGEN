main () {
    int n, i, y, m1, m2, t, sum;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &y, &m1, &m2);
        sum = 0;
        if (m1 > m2) {
            t = m1;
            m1 = m2;
            m2 = t;
        }
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            if (1 >= m1 && 1 < m2)
                sum = sum + 31;
            if (2 >= m1 && 2 < m2)
                sum = sum + 29;
            if (3 >= m1 && 3 < m2)
                sum = sum + 31;
            if (4 >= m1 && 4 < m2)
                sum = sum + 30;
            if (5 >= m1 && 5 < m2)
                sum = sum + 31;
            if (6 >= m1 && 6 < m2)
                sum = sum + 30;
            if (7 >= m1 && 7 < m2)
                sum = sum + 31;
            if (8 >= m1 && 8 < m2)
                sum = sum + 31;
            if (9 >= m1 && 9 < m2)
                sum = sum + 30;
            if (10 >= m1 && 10 < m2)
                sum = sum + 31;
            if (11 >= m1 && 11 < m2)
                sum = sum + 30;
            if (12 >= m1 && 12 < m2)
                sum = sum + 31;
            if (sum % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
        else {
            if (1 >= m1 && 1 < m2)
                sum = sum + 31;
            if (2 >= m1 && 2 < m2)
                sum = sum + 28;
            if (3 >= m1 && 3 < m2)
                sum = sum + 31;
            if (4 >= m1 && 4 < m2)
                sum = sum + 30;
            if (5 >= m1 && 5 < m2)
                sum = sum + 31;
            if (6 >= m1 && 6 < m2)
                sum = sum + 30;
            if (7 >= m1 && 7 < m2)
                sum = sum + 31;
            if (8 >= m1 && 8 < m2)
                sum = sum + 31;
            if (9 >= m1 && 9 < m2)
                sum = sum + 30;
            if (10 >= m1 && 10 < m2)
                sum = sum + 31;
            if (11 >= m1 && 11 < m2)
                sum = sum + 30;
            if (12 >= m1 && 12 < m2)
                sum = sum + 31;
            if (sum % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
    }
}

