main () {
    int a, b = 0;
    scanf ("%d", &a);
    do {
        if (a == 1)
            break;
        if (a % 2 != 0) {
            b = a;
            a = a * 3 + 1;
            printf ("%d*3+1=%d\n", b, a);
        }
        else {
            b = a;
            a = a / 2;
            printf ("%d/2=%d\n", b, a);
        }
    }
    while (a != 1);
    if (a == 1)
        printf ("End");
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

