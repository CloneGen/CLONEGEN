int main () {
    int w, a;
    scanf ("%d", &w);
    a = (13 - 1) % 7 + w;
    if (a > 7) {
        a = a - 7;
    }
    int b;
    for (int i = 1;
    i <= 12; i++) {
        b = a;
        if (i == 1) {
            if (a == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 2) {
            b = 31 % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 3) {
            b = (28 + 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 4) {
            b = (28 + 31 * 2) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 5) {
            b = (28 + 30 + 31 * 2) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 6) {
            b = (28 + 30 + 3 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 7) {
            b = (28 + 30 * 2 + 3 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 8) {
            b = (28 + 30 * 2 + 4 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 9) {
            b = (28 + 30 * 2 + 5 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 10) {
            b = (28 + 30 * 3 + 5 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 11) {
            b = (28 + 30 * 3 + 6 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
        if (i == 12) {
            b = (28 + 30 * 4 + 6 * 31) % 7 + b;
            if (b > 7) {
                b = b - 7;
            }
            if (b == 5) {
                printf ("%d\n", i);
            }
        }
    }
    return 0;
}

