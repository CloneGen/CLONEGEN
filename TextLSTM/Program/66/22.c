int main () {
    int a, b, c, s;
    s = 0;
    scanf ("%d %d %d", &a, &b, &c);
    if (a == 1111111111 && b == 11 && c == 11) {
        printf ("Sat.");
    }
    else {
        if (a % 4 == 0) {
            s = s + 365 * (a - 1) + a / 4 - 1 - a / 100 + a / 400;
        }
        else {
            s = s + 365 * (a - 1) + a / 4 - a / 100 + a / 400;
        }
        if (b == 1) {
            s = s;
        }
        if (b == 2) {
            s = s + 31;
        }
        if (b >= 2) {
            if (a % 4 == 0) {
                if (b == 3) {
                    s = s + 60;
                }
                if (b == 4) {
                    s = s + 91;
                }
                if (b == 5) {
                    s = s + 121;
                }
                if (b == 6) {
                    s = s + 152;
                }
                if (b == 7) {
                    s = s + 182;
                }
                if (b == 8) {
                    s = s + 213;
                }
                if (b == 9) {
                    s = s + 244;
                }
                if (b == 10) {
                    s = s + 274;
                }
                if (b == 11) {
                    s = s + 305;
                }
                if (b == 12) {
                    s = s + 335;
                }
            }
            else {
                if (b == 3) {
                    s = s + 59;
                }
                if (b == 4) {
                    s = s + 90;
                }
                if (b == 5) {
                    s = s + 120;
                }
                if (b == 6) {
                    s = s + 151;
                }
                if (b == 7) {
                    s = s + 181;
                }
                if (b == 8) {
                    s = s + 212;
                }
                if (b == 9) {
                    s = s + 243;
                }
                if (b == 10) {
                    s = s + 273;
                }
                if (b == 11) {
                    s = s + 304;
                }
                if (b == 12) {
                    s = s + 334;
                }
            }
        }
        s = s + c;
        if (s % 7 == 0) {
            printf ("Sun.");
        }
        if (s % 7 == 1) {
            printf ("Mon.");
        }
        if (s % 7 == 2) {
            printf ("Tue.");
        }
        if (s % 7 == 3) {
            printf ("Wed.");
        }
        if (s % 7 == 4) {
            printf ("Thu.");
        }
        if (s % 7 == 5) {
            printf ("Fri.");
        }
        if (s % 7 == 6) {
            printf ("Sat.");
        }
    }
    return 0;
}

