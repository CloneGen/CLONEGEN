int main () {
    int w, i, a [365], c = 0;
    scanf ("%d", &w);
    a[0] = w;
    for (i = 0; i < 364; i++) {
        if (a[i] == 7)
            a[i] = 0;
        a[i + 1] = a[i] + 1;
    }
    for (i = 0; i < 365; i++) {
        if (a[i] == 5) {
            if (i == 12) {
                printf ("1\n");
                c++;
            }
            if (i == 43) {
                printf ("2\n");
                c++;
            }
            if (i == 71) {
                printf ("3\n");
                c++;
            }
            if (i == 102) {
                printf ("4\n");
                c++;
            }
            if (i == 132) {
                printf ("5\n");
                c++;
            }
            if (i == 163) {
                printf ("6\n");
                c++;
            }
            if (i == 193) {
                printf ("7\n");
                c++;
            }
            if (i == 224) {
                printf ("8\n");
                c++;
            }
            if (i == 255) {
                printf ("9\n");
                c++;
            }
            if (i == 285) {
                printf ("10\n");
                c++;
            }
            if (i == 316) {
                printf ("11\n");
                c++;
            }
            if (i == 346) {
                printf ("12\n");
                c++;
            }
        }
    }
    return 0;
}

