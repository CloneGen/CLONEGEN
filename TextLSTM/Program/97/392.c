int main () {
    int m;
    scanf ("%d\n", &m);
    if (m / 100 > 0) {
        printf ("%d\n", m / 100);
        m = m % 100;
    }
    else {
        printf ("0\n");
        m = m % 100;
    }
    if (m / 50 > 0) {
        printf ("%d\n", m / 50);
        m = m - 50;
    }
    else {
        printf ("%d\n", 0);
    }
    if (m / 20 > 0) {
        printf ("%d\n", m / 20);
        m = m - 20 * (m / 20);
    }
    else {
        printf ("0\n");
    }
    if (m / 10 > 0) {
        printf ("%d\n", m / 10);
        m = m - 10 * (m / 10);
    }
    else {
        printf ("0\n");
    }
    if (m / 5 > 0) {
        printf ("%d\n", m / 5);
        m = m - 5;
    }
    else {
        printf ("0\n");
    }
    if (m > 0) {
        printf ("%d\n", m);
    }
    else {
        printf ("0\n");
    }
    return 0;
}

