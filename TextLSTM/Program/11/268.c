int main () {
    int i, j, k, m, n;
    scanf ("%d%d%d", &i, &j, &k);
    if ((i % 4 == 0 && i % 100 != 0) || (i % 100 == 0 && i % 400 == 0)) {
        if (j == 1) {
            m = k;
            printf ("%d", m);
        }
        if (j == 2) {
            m = k + 31;
            printf ("%d", m);
        }
        if (j == 3) {
            m = k + 60;
            printf ("%d", m);
        }
        if (j == 4) {
            m = k + 91;
            printf ("%d", m);
        }
        if (j == 5) {
            m = k + 121;
            printf ("%d", m);
        }
        if (j == 6) {
            m = k + 152;
            printf ("%d", m);
        }
        if (j == 7) {
            m = k + 182;
            printf ("%d", m);
        }
        if (j == 8) {
            m = k + 213;
            printf ("%d", m);
        }
        if (j == 9) {
            m = k + 244;
            printf ("%d", m);
        }
        if (j == 10) {
            m = k + 274;
            printf ("%d", m);
        }
        if (j == 11) {
            m = k + 305;
            printf ("%d", m);
        }
        if (j == 12) {
            m = k + 335;
            printf ("%d", m);
        }
    }
    else {
        if (j == 1) {
            m = k;
            printf ("%d", m);
        }
        if (j == 2) {
            m = k + 31;
            printf ("%d", m);
        }
        if (j == 3) {
            m = k + 59;
            printf ("%d", m);
        }
        if (j == 4) {
            m = k + 90;
            printf ("%d", m);
        }
        if (j == 5) {
            m = k + 120;
            printf ("%d", m);
        }
        if (j == 6) {
            m = k + 151;
            printf ("%d", m);
        }
        if (j == 7) {
            m = k + 181;
            printf ("%d", m);
        }
        if (j == 8) {
            m = k + 212;
            printf ("%d", m);
        }
        if (j == 9) {
            m = k + 243;
            printf ("%d", m);
        }
        if (j == 10) {
            m = k + 273;
            printf ("%d", m);
        }
        if (j == 11) {
            m = k + 304;
            printf ("%d", m);
        }
        if (j == 12) {
            m = k + 334;
            printf ("%d", m);
        }
    }
}

