int main () {
    int p [400], q [12];
    int a, b, c, i, s = 0;
    for (i = 1; i <= 12; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            q[i] = 31;
        }
        else {
            if (i == 4 || i == 6 || i == 9 || i == 11) {
                q[i] = 30;
            }
            else {
                q[i] = 28;
            }
        }
    }
    scanf ("%d%d%d", &a, &b, &c);
    if (a % 400 != 0) {
        a = a % 400;
    }
    else {
        a = 400;
    }
    for (i = 1; i <= a; i++) {
        if (i % 400 == 0) {
            p[i] = 1;
        }
        else {
            if (i % 100 == 0) {
                p[i] = 0;
            }
            else {
                if (i % 4 == 0) {
                    p[i] = 1;
                }
                else {
                    p[i] = 0;
                }
            }
        }
    }
    for (i = 1; i <= b; i++) {
        s = s + q[i];
    }
    s = s - q[b] + c;
    for (i = 1; i <= a; i++) {
        s = s + p[i] + 365;
    }
    s = s - 365 - p[a];
    if (p[a] == 1 && b >= 3) {
        s = s + 1;
    }
    s = s % 7;
    if (s == 1) {
        printf ("Mon.");
    }
    if (s == 2) {
        printf ("Tue.");
    }
    if (s == 3) {
        printf ("Wed.");
    }
    if (s == 4) {
        printf ("Thu.");
    }
    if (s == 5) {
        printf ("Fri.");
    }
    if (s == 6) {
        printf ("Sat.");
    }
    if (s == 0) {
        printf ("Sun.");
    }
    return 0;
}

