int main () {
    int n;
    char a;
    scanf ("%d", &n);
    scanf ("%c", &a);
    while (n--) {
        while (1) {
            scanf ("%c", &a);
            if (a == 'A')
                printf ("T");
            if (a == 'T')
                printf ("A");
            if (a == 'C')
                printf ("G");
            if (a == 'G')
                printf ("C");
            if (a == '\n') {
                printf ("\n");
                break;
            }
        }
    }
    return 0;
}

