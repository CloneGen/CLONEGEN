int main () {
    int a, b, i, l, j, x = 0, y = 0;
    char n [100], s [100];
    scanf ("%s", n);
    l = strlen (n);
    for (i = 0; i < l; i++) {
        x = y * 10 + n[i] - '0';
        y = x % 13;
        s[i] = x / 13 + '0';
    }
    if (l == 1) {
        printf ("%d\n", 0);
        printf ("%d", y);
    }
    else if (l == 2) {
        if (s[1] == 0) {
            printf ("%d\n", 0);
            printf ("%d", y);
        }
        else
            printf ("%c\n%d", s[1], y);
    }
    else {
        if (s[1] == '0') {
            for (i = 2; i < l; i++) {
                printf ("%c", s[i]);
            }
            printf ("\n%d", y);
        }
        else {
            for (i = 1; i < l; i++) {
                printf ("%c", s[i]);
            }
            printf ("\n%d", y);
        }
    }
    getchar ();
    getchar ();
}

