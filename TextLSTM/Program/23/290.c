int main () {
    char str [100];
    int i, n = 0, t, m = 0;
    gets (str);
    n = strlen (str);
    for (i = n - 1; i >= 0; i = i - 1) {
        if (str[i] != ' ') {
            m = m + 1;
        }
        else {
            for (t = i + 1; t < i + 1 + m; t++)
                printf ("%c", str[t]);
            m = 0;
            printf (" ");
        }
    }
    for (t = i + 1; t < i + 1 + m; t++)
        printf ("%c", str[t]);
    return 0;
}

