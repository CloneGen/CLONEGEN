int main () {
    int w, i;
    scanf ("%d", &w);
    int a [365];
    for (i = 1; i < 365; i++) {
        if (i % 7 == 0) {
            a[i] = w;
        }
        if (i % 7 == 1 && w <= 6) {
            a[i] = w + 1;
        }
        if (i % 7 == 1 && w == 7) {
            a[i] = w - 6;
        }
        if (i % 7 == 2 && w <= 5) {
            a[i] = w + 2;
        }
        if (i % 7 == 2 && w > 5) {
            a[i] = w - 5;
        }
        if (i % 7 == 3 && w <= 4) {
            a[i] = w + 3;
        }
        if (i % 7 == 3 && w > 4) {
            a[i] = w - 4;
        }
        if (i % 7 == 4 && w <= 3) {
            a[i] = w + 4;
        }
        if (i % 7 == 4 && w > 3) {
            a[i] = w - 3;
        }
        if (i % 7 == 5 && w <= 2) {
            a[i] = w + 5;
        }
        if (i % 7 == 5 && w > 2) {
            a[i] = w - 2;
        }
        if (i % 7 == 6 && w <= 1) {
            a[i] = w + 6;
        }
        if (i % 7 == 6 && w > 1) {
            a[i] = w - 1;
        }
        a[0] = w;
    }
    for (i = 0; i < 365; i++) {
        if (a[i] == 5 && i == 12) {
            printf ("1\n");
        }
        if (a[i] == 5 && i == 43) {
            printf ("2\n");
        }
        if (a[i] == 5 && i == 71) {
            printf ("3\n");
        }
        if (a[i] == 5 && i == 102) {
            printf ("4\n");
        }
        if (a[i] == 5 && i == 132) {
            printf ("5\n");
        }
        if (a[i] == 5 && i == 163) {
            printf ("6\n");
        }
        if (a[i] == 5 && i == 193) {
            printf ("7\n");
        }
        if (a[i] == 5 && i == 224) {
            printf ("8\n");
        }
        if (a[i] == 5 && i == 255) {
            printf ("9\n");
        }
        if (a[i] == 5 && i == 285) {
            printf ("10\n");
        }
        if (a[i] == 5 && i == 316) {
            printf ("11\n");
        }
        if (a[i] == 5 && i == 346) {
            printf ("12\n");
        }
    }
    return 0;
}

