main () {
    int i, j;
    scanf ("%d", &i);
    while (i > 1) {
        if (i % 2 == 0) {
            j = i / 2;
            printf ("%d/2=%d\n", i, j);
            i = j;
        }
        else {
            j = i * 3 + 1;
            printf ("%d*3+1=%d\n", i, j);
            i = j;
        }
    }
    printf ("End");
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

