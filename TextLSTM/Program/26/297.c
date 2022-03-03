int main () {
    char str [101];
    gets (str);
    putchar (str [0]);
    int i;
    for (i = 1; str[i] != NULL; i++) {
        if (str[i] != ' ')
            putchar (str[i]);
        else if (str[i] != str[i - 1])
            putchar (' ');
    }
    return 0;
}

