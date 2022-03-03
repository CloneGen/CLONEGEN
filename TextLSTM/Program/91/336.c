int main () {
    int len;
    char str [200], *p;
    gets (str);
    len = strlen (str);
    for (p = str; *(p + 1); p++)
        printf ("%c", *p + *(p + 1));
    printf ("%c\n", *p + *str);
    return 0;
}

