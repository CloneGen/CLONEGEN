int main () {
    int n, count;
    char a [300];
    scanf ("%d", &n);
    for (int i = 1;
    i <= n; i++) {
        scanf ("%s", a);
        for (int m = 0;
        m < strlen (a); m++) {
            if (a[m] == 'A')
                printf ("T");
            if (a[m] == 'T')
                printf ("A");
            if (a[m] == 'C')
                printf ("G");
            if (a[m] == 'G')
                printf ("C");
        }
        printf ("\n");
    }
    return 0;
}

