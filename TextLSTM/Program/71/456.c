int main () {
    int n;
    int year, ma, mb, day;
    int i;
    day = 1;
    int xa, xb;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d%d%d", &year, &ma, &mb);
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (ma == 1) {
                xa = day;
            }
            if (ma == 2) {
                xa = 31 + day;
            }
            if (ma == 3) {
                xa = 31 + 29 + day;
            }
            if (ma == 4) {
                xa = 31 + 29 + 31 + day;
            }
            if (ma == 5) {
                xa = 31 * 2 + 30 + 29 + day;
            }
            if (ma == 6) {
                xa = 31 * 3 + 30 + 29 + day;
            }
            if (ma == 7) {
                xa = 31 * 3 + 30 * 2 + 29 + day;
            }
            if (ma == 8) {
                xa = 31 * 4 + 30 * 2 + 29 + day;
            }
            if (ma == 9) {
                xa = 31 * 5 + 30 * 2 + 29 + day;
            }
            if (ma == 10) {
                xa = 31 * 5 + 30 * 3 + 29 + day;
            }
            if (ma == 11) {
                xa = 31 * 6 + 30 * 3 + 29 + day;
            }
            if (ma == 12) {
                xa = 31 * 6 + 30 * 4 + 29 + day;
            }
            if (mb == 1) {
                xb = day;
            }
            if (mb == 2) {
                xb = 31 + day;
            }
            if (mb == 3) {
                xb = 31 + 29 + day;
            }
            if (mb == 4) {
                xb = 31 + 29 + 31 + day;
            }
            if (mb == 5) {
                xb = 31 * 2 + 30 + 29 + day;
            }
            if (mb == 6) {
                xb = 31 * 3 + 30 + 29 + day;
            }
            if (mb == 7) {
                xb = 31 * 3 + 30 * 2 + 29 + day;
            }
            if (mb == 8) {
                xb = 31 * 4 + 30 * 2 + 29 + day;
            }
            if (mb == 9) {
                xb = 31 * 5 + 30 * 2 + 29 + day;
            }
            if (mb == 10) {
                xb = 31 * 5 + 30 * 3 + 29 + day;
            }
            if (mb == 11) {
                xb = 31 * 6 + 30 * 3 + 29 + day;
            }
            if (mb == 12) {
                xb = 31 * 6 + 30 * 4 + 29 + day;
            }
        }
        else {
            if (ma == 1) {
                xa = day;
            }
            if (ma == 2) {
                xa = 31 + day;
            }
            if (ma == 3) {
                xa = 31 + 28 + day;
            }
            if (ma == 4) {
                xa = 31 + 28 + 31 + day;
            }
            if (ma == 5) {
                xa = 31 * 2 + 30 + 28 + day;
            }
            if (ma == 6) {
                xa = 31 * 3 + 30 + 28 + day;
            }
            if (ma == 7) {
                xa = 31 * 3 + 30 * 2 + 28 + day;
            }
            if (ma == 8) {
                xa = 31 * 4 + 30 * 2 + 28 + day;
            }
            if (ma == 9) {
                xa = 31 * 5 + 30 * 2 + 28 + day;
            }
            if (ma == 10) {
                xa = 31 * 5 + 30 * 3 + 28 + day;
            }
            if (ma == 11) {
                xa = 31 * 6 + 30 * 3 + 28 + day;
            }
            if (ma == 12) {
                xa = 31 * 6 + 30 * 4 + 28 + day;
            }
            if (mb == 1) {
                xb = day;
            }
            if (mb == 2) {
                xb = 31 + day;
            }
            if (mb == 3) {
                xb = 31 + 28 + day;
            }
            if (mb == 4) {
                xb = 31 + 28 + 31 + day;
            }
            if (mb == 5) {
                xb = 31 * 2 + 30 + 28 + day;
            }
            if (mb == 6) {
                xb = 31 * 3 + 30 + 28 + day;
            }
            if (mb == 7) {
                xb = 31 * 3 + 30 * 2 + 28 + day;
            }
            if (mb == 8) {
                xb = 31 * 4 + 30 * 2 + 28 + day;
            }
            if (mb == 9) {
                xb = 31 * 5 + 30 * 2 + 28 + day;
            }
            if (mb == 10) {
                xb = 31 * 5 + 30 * 3 + 28 + day;
            }
            if (mb == 11) {
                xb = 31 * 6 + 30 * 3 + 28 + day;
            }
            if (mb == 12) {
                xb = 31 * 6 + 30 * 4 + 28 + day;
            }
        }
        if ((xb - xa) % 7 == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    }
    return 0;
}

