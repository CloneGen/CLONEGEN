void main () {
    int i = 0;
    int a [26] = {0}, A [26] = {0};
    int temp = 0;
    char c;
    int test = 1;
    for (i = 0; i < 300; i++) {
        c = getchar ();
        if ('\n' == c)
            break;
        temp = c - 'a';
        if (0 <= temp && temp < 26)
            a[temp]++;
        temp = c - 'A';
        if (0 <= temp && temp < 26)
            A[temp]++;
    }
    for (i = 0; i < 26; i++) {
        if (A[i]) {
            printf ("%c=%d\n", ('A' + i), A[i]);
            test = 0;
        }
    }
    for (i = 0; i < 26; i++) {
        if (a[i]) {
            printf ("%c=%d\n", ('a' + i), a[i]);
            test = 0;
        }
    }
    if (test)
        printf ("No\n");
}

