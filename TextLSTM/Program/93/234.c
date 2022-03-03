int main () {
    int num, i = 1;
    scanf ("%d", &num);
    if (num % 3 == 0) {
        printf ("3");
        i = 0;
    }
    if (num % 5 == 0) {
        if (i == 0) {
            printf (" ");
        }
        printf ("5");
        i = 0;
    }
    if (num % 7 == 0) {
        if (i == 0) {
            printf (" ");
        }
        printf ("7");
        i = 0;
    }
    if (i == 1) {
        printf ("n");
    }
    return 0;
}

