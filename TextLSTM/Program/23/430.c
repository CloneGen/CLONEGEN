void main () {
    int i = 0;
    char str [100] [100];
    while (scanf ("%s", str[i]) != EOF)
        i++;
    i--;
    for (; i > 0; i--)
        printf ("%s ", str[i]);
    printf ("%s", str[0]);
}

