int main () {
    char a [300], j, i;
    int m, p = 0;
    scanf ("%s", a);
    for (j = 'A'; j <= 'Z'; j++) {
        m = 0;
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == j) {
                m++;
            }
        }
        if (m != 0) {
            printf ("%c=%d\n", j, m);
            p = 1;
        }
        else {
            p = 0;
        }
    }
    for (j = 'a'; j <= 'z'; j++) {
        m = 0;
        for (i = 0; a[i] != '\0'; i++) {
            if (a[i] == j) {
                m++;
            }
        }
        if (m != 0) {
            printf ("%c=%d\n", j, m);
            if (p == 0) {
                p = 1;
            }
        }
        if (m == 0) {
            if (p == 1) {
                p = 1;
            }
        }
    }
    if (p == 0) {
        printf ("No\n");
    }
    return 0;
}

