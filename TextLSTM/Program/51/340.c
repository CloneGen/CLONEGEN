int main () {
    char s [501] = {""}, s1 [501] [501] = {""};
    int n, i, j, a [501] = {0}, max = 0;
    scanf ("%d\n", &n);
    gets (s);
    for (i = 0; i <= strlen (s) - n; i++)
        for (j = 0; j < n; j++)
            *(*(s1 + i) + j) = *(s + i + j);
    for (i = 0; i <= strlen (s) - n; i++)
        for (j = i; j <= strlen (s) - n; j++)
            if (strcmp (*(s1 + i), *(s1 + j)) == 0 && *(s1 + i) != ' ') {
                *(a + i) = *(a + i) + 1;
                *(s + j) = ' ';
            }
    for (i = 0; i <= strlen (s) - n; i++)
        if (max < *(a + i))
            max = *(a + i);
    if (max == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", max);
        for (i = 0; i <= strlen (s) - n; i++)
            if (*(a + i) == max)
                printf ("%s\n", *(s1 + i));
    }
}

