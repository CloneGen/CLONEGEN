int main () {
    int n;
    scanf ("%d", &n);
    if (n >= 100) {
        printf ("%d\n", n / 100);
        n = n % 100;
    }
    else
        printf ("0\n");
    if (n >= 50) {
        printf ("%d\n", n / 50);
        n = n % 50;
    }
    else
        printf ("0\n");
    if (n >= 20) {
        printf ("%d\n", n / 20);
        n = n % 20;
    }
    else
        printf ("0\n");
    if (n >= 10) {
        printf ("%d\n", n / 10);
        n = n % 10;
    }
    else
        printf ("0\n");
    if (n >= 5) {
        printf ("%d\n", n / 5);
        n = n % 5;
    }
    else
        printf ("0\n");
    printf ("%d\n", n);
    return 0;
}

