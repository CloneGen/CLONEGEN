int main () {
    int a, b, c, d;
    scanf ("%d%d%d", &a, &b, &c);
    if (b == 1) {
        d = c;
    }
    if (b == 2) {
        d = c + 31;
    }
    if (b == 3) {
        d = c + 31 + 28;
    }
    if (b == 4) {
        d = c + 59 + 31;
    }
    if (b == 5) {
        d = c + 90 + 30;
    }
    if (b == 6) {
        d = c + 120 + 31;
    }
    if (b == 7) {
        d = c + 151 + 30;
    }
    if (b == 8) {
        d = c + 181 + 31;
    }
    if (b == 9) {
        d = c + 212 + 31;
    }
    if (b == 10) {
        d = c + 243 + 30;
    }
    if (b == 11) {
        d = c + 273 + 31;
    }
    if (b == 12) {
        d = c + 304 + 30;
    }
    if (a % 100 == 0) {
        if (a % 400 == 0) {
            if (b != 1 && b != 2) {
                d = d + 1;
            }
        }
    }
    else if (a % 100 != 0 && a % 4 == 0) {
        if (b != 1 && b != 2) {
            d = d + 1;
        }
    }
    printf ("%d", d);
    return 0;
}

