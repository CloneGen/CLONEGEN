int main () {
    int w, a, b, i;
    scanf ("%d", &w);
    for (i = 1; i <= 12; i++) {
        if (i == 1) {
            a = 12 + w;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 2) {
            a = 12 + w + 31;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 3) {
            a = 12 + w + 31 + 28;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 4) {
            a = 12 + w + 31 + 28 + 31;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 5) {
            a = 12 + w + 31 + 28 + 31 + 30;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 6) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 7) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31 + 30;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 8) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31 + 30 + 31;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 9) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 10) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 11) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 12) {
            a = 12 + w + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            b = a % 7;
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
    }
    return 0;
}

