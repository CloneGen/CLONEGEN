main () {
    int year, m, n, i, t, a [13];
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d %d %d", &year, &m, &n);
        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
            a[0] = 0;
            a[1] = 0;
            a[2] = 31;
            a[3] = 60;
            a[4] = 91;
            a[5] = 121;
            a[6] = 152;
            a[7] = 182;
            a[8] = 213;
            a[9] = 244;
            a[10] = 274;
            a[11] = 305;
            a[12] = 335;
            if ((a[m] - a[n]) % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
        else {
            a[0] = 0;
            a[1] = 0;
            a[2] = 31;
            a[3] = 59;
            a[4] = 90;
            a[5] = 120;
            a[6] = 151;
            a[7] = 181;
            a[8] = 212;
            a[9] = 243;
            a[10] = 273;
            a[11] = 304;
            a[12] = 334;
            if ((a[m] - a[n]) % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        }
    }
    return 0;
}

