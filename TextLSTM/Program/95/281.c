void main () {
    char c1 [81], c2 [81];
    char t1 [81], t2 [81];
    int i;
    gets (c1);
    gets (c2);
    for (i = 0; i < 81; i++) {
        if (c1[i] >= 65 && c1[i] <= 90)
            t1[i] = c1[i] + 32;
        else
            t1[i] = c1[i];
    }
    for (i = 0; i < 81; i++) {
        if (c2[i] >= 65 && c2[i] <= 90)
            t2[i] = c2[i] + 32;
        else
            t2[i] = c2[i];
    }
    if (strcmp (t1, t2) < 0)
        printf ("<");
    else if (strcmp (t1, t2) == 0)
        printf ("=");
    else if (strcmp (t1, t2) > 0)
        printf (">");
}

