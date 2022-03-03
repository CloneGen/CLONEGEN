const  char flag = -128, noo = -126;

int main () {
    int i, l1, l2, l;
    char s1 [101], s2 [101], s [1001], *p;
    gets (s);
    gets (s1);
    gets (s2);
    l1 = strlen (s1);
    l2 = strlen (s2);
    l = strlen (s);
    while ((p = strstr (s, s1)) != NULL) {
        if (p != s && *(p - 1) != ' ') {
            *p = noo;
            continue;
        }
        *p = flag;
        for (p++; *(p + l1 - 1) != 0; p++)
            *p = *(p + l1 - 1);
        *p = 0;
        l -= l1 - 1;
    }
    for (i = 0; i < l; i++)
        if (s[i] == flag)
            printf ("%s", s2);
        else if (s[i] == noo)
            printf ("%c", s1[0]);
        else
            printf ("%c", s[i]);
    printf ("\n");
    return 0;
}

