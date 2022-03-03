int findMax (char *str) {
    int i, max = *str, ret = 0;
    for (i = 0; *(str + i); i++)
        if (*(str + i) > max)
            max = *(str + i), ret = i;
    return ret;
}

void insert (char *str, char *substr, int index) {
    int i;
    char *p;
    for (p = str + strlen (str); p > str + index; p--)
        *(p + strlen (substr)) = *p;
    for (i = 0; i < strlen (substr); i++)
        *(str + index + 1 + i) = *(substr + i);
}

int main () {
    int k;
    char str [11], substr [4];
    while (scanf ("%s%s", str, substr) != EOF) {
        k = findMax (str);
        insert (str, substr, k);
        printf ("%s\n", str);
    }
    return 0;
}

