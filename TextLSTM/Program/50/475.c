int main () {
    int w, d = 12, a;
    scanf ("%d", &w);
    a = 12 % 7;
    if ((a + w) % 7 == 5) {
        printf ("1\n");
    }
    d += 31;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("2\n");
    }
    d += 28;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("3\n");
    }
    d += 31;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("4\n");
    }
    d += 30;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("5\n");
    }
    d += 31;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("6\n");
    }
    d += 30;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("7\n");
    }
    d += 31;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("8\n");
    }
    d += 31;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("9\n");
    }
    d += 30;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("10\n");
    }
    d += 31;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("11\n");
    }
    d += 30;
    a = d % 7;
    if ((a + w) % 7 == 5) {
        printf ("12\n");
    }
    return 0;
}

