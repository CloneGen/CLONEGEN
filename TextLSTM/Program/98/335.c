void main () {
    int i, n, sum = 0;
    char *p;
    scanf ("%d", &n);
    p = (char *) malloc (40);
    scanf ("%s", p);
    sum += strlen (p);
    printf ("%s", p);
    for (i = 1; i < n; i++) {
        p = (char *) malloc (40);
        scanf ("%s", p);
        sum += strlen (p) + 1;
        if (sum < 80)
            printf (" %s", p);
        else if (sum == 80) {
            printf (" %s\n", p);
            free (p);
            p = (char *) malloc (40);
            scanf ("%s", p);
            printf ("%s", p);
            sum = strlen (p);
            i++;
        }
        else {
            printf ("\n%s", p);
            sum = strlen (p);
        }
    }
    printf ("\n");
}

