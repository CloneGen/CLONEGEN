int main () {
    int i;
    int cmp;
    char s1 [MAX +1], s2 [MAX +1];
    gets (s1);
    gets (s2);
    for (i = 0; s1[i]; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] -= 'a' - 'A';
        }
    }
    for (i = 0; s2[i]; i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            s2[i] -= 'a' - 'A';
        }
    }
    cmp = strcmp (s1, s2);
    if (cmp > 0) {
        printf (">");
    }
    else if (cmp < 0) {
        printf ("<");
    }
    else {
        printf ("=");
    }
    return 0;
}

