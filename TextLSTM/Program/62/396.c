void main () {
    int i, j;
    char *str;
    str = (char *) malloc (100 * sizeof (char));
    char *p;
    p = str;
    gets (str);
    for (p = str, i = 0; p < str + strlen (str); p++, i++) {
        if (*(p - 1) == ' ' && *(p) == ' ') {
            for (j = i - 1; j < strlen (str); j++)
                *(str + j) = *(str + j + 1);
            i--;
            p = str + i;
        }
    }
    puts (str);
}

