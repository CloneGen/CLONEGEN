int main (void) {
    int n, a, b, c;
    scanf ("%d", &n);
    if (n % 7 == 0) {
        if (n % 5 == 0) {
            if (n % 3 == 0)
                printf ("3 5 7");
            else
                printf ("5 7");
        }
        else if (n % 3 == 0)
            printf ("3 7");
        else
            printf ("7");
    }
    else if (n % 5 == 0) {
        if (n % 3 == 0)
            printf ("3 5");
        else
            printf ("5");
    }
    else if (n % 3 == 0)
        printf ("3");
    else
        printf ("n");
    return 0;
}

