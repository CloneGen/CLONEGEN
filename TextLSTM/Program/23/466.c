void main () {
    char str2 [100], str [100], str1 [100];
    int m = 0, i, k, n = 0, str_len;
    gets (str2);
    str[0] = ' ';
    str[1] = '\0';
    strcat (str, str2);
    k = strlen (str);
    str_len = k;
    char *p, *q;
    q = str1;
    p = str + k - 1;
    while (1) {
        for (; *p != ' '; p--)
            m++;
        for (i = 0; i < m; i++, q++)
            *q = *(p + i + 1);
        *q = ' ';
        q++;
        n = n + m + 1;
        k = str_len - n;
        if (p == str)
            break;
        else {
            p = str + k - 1;
            m = 0;
        }
    }
    k = strlen (str);
    q = str1;
    *(q + k - 1) = '\0';
    puts (str1);
}

