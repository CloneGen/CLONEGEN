main () {
    int a;
    scanf ("%d", &a);
    while (a > 1) {
        if (a % 2 == 1) {
            printf ("%d*3+1=%d\n", a, a * 3 + 1);
            a = a * 3 + 1;
        }
        if (a % 2 == 0)
            ;
        {
            printf ("%d/2=%d\n", a, a / 2);
            a = a / 2;
        }
    }
    printf ("End");
    getchar ();
    getchar ();
    return 0;
}

