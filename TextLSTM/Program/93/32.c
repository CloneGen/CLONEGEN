int main () {
    int n;
    scanf ("%d", &n);
    if (n % 3 == 0) {
        printf ("3");
        if (n % 5 == 0)
            printf (" 5");
        if (n % 7 == 0)
            printf (" 7");
    }
    else if (n % 5 == 0) {
        printf ("5");
        if (n % 7 == 0)
            printf (" 7");
    }
    else if (n % 7 == 0)
        printf ("7");
    else
        printf ("n");
    printf ("\n");
    return 0;
}

