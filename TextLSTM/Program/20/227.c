void main () {
    int max, i, max_index;
    char str1 [20], str2 [10], ans [20];
    char *ipstr1 = str1;
    while (scanf ("%s%s", str1, str2) != EOF) {
        max = 0;
        for (i = 1; *(str1 + i); i++)
            if (*(str1 + i) > max)
                max = *(str1 + i), max_index = i;
        strcpy (ans, "");
        strncat (ans, str1, max_index + 1);
        strcat (ans, str2);
        strcat (ans, str1 + max_index + 1);
        printf ("%s\n", ans);
    }
}

