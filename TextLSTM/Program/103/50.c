main () {
    int i, count;
    i >= 0;
    i <= 1000;
    char a [1000];
    scanf ("%s", a);
    count = 1;
    for (i = 0; i <= 1000; i++) {
        if (a[i] > 'Z')
            a[i] = a[i] - 'a' + 'A';
        else
            a[i] = a[i];
    }
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i + 1] == a[i]) {
            count = count + 1;
        }
        else {
            printf ("(%c,%d)", a[i], count);
            count = 1;
        }
    }
    getchar ();
}

