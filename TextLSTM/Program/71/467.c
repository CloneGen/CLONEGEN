int main () {
    int i, n, y, m1, m2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &y, &m1, &m2);
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            if (m1 == 1)
                m1 = 0;
            if (m1 == 2)
                m1 = 31;
            if (m1 == 3)
                m1 = 60;
            if (m1 == 4)
                m1 = 91;
            if (m1 == 5)
                m1 = 121;
            if (m1 == 6)
                m1 = 152;
            if (m1 == 7)
                m1 = 182;
            if (m1 == 8)
                m1 = 213;
            if (m1 == 9)
                m1 = 244;
            if (m1 == 10)
                m1 = 274;
            if (m1 == 11)
                m1 = 305;
            if (m1 == 12)
                m1 = 335;
            if (m2 == 1)
                m2 = 0;
            if (m2 == 2)
                m2 = 31;
            if (m2 == 3)
                m2 = 60;
            if (m2 == 4)
                m2 = 91;
            if (m2 == 5)
                m2 = 121;
            if (m2 == 6)
                m2 = 152;
            if (m2 == 7)
                m2 = 182;
            if (m2 == 8)
                m2 = 213;
            if (m2 == 9)
                m2 = 244;
            if (m2 == 10)
                m2 = 274;
            if (m2 == 11)
                m2 = 305;
            if (m2 == 12)
                m2 = 335;
        }
        else {
            if (m1 == 1)
                m1 = 0;
            if (m1 == 2)
                m1 = 31;
            if (m1 == 3)
                m1 = 59;
            if (m1 == 4)
                m1 = 90;
            if (m1 == 5)
                m1 = 120;
            if (m1 == 6)
                m1 = 151;
            if (m1 == 7)
                m1 = 181;
            if (m1 == 8)
                m1 = 212;
            if (m1 == 9)
                m1 = 243;
            if (m1 == 10)
                m1 = 273;
            if (m1 == 11)
                m1 = 304;
            if (m1 == 12)
                m1 = 334;
            if (m2 == 1)
                m2 = 0;
            if (m2 == 2)
                m2 = 31;
            if (m2 == 3)
                m2 = 59;
            if (m2 == 4)
                m2 = 90;
            if (m2 == 5)
                m2 = 120;
            if (m2 == 6)
                m2 = 151;
            if (m2 == 7)
                m2 = 181;
            if (m2 == 8)
                m2 = 212;
            if (m2 == 9)
                m2 = 243;
            if (m2 == 10)
                m2 = 273;
            if (m2 == 11)
                m2 = 304;
            if (m2 == 12)
                m2 = 334;
        }
        if (m1 > m2) {
            if ((m1 - m2) % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
        if (m2 > m1) {
            if ((m2 - m1) % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
    }
    return 0;
}

