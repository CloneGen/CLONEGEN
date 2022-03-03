int main () {
    char src [256];
    char dst [256];
    char replacement [256];
    scanf ("%s", src);
    scanf ("%s", dst);
    scanf ("%s", replacement);
    char *p = strstr (src, dst);
    if (p == NULL) {
        printf ("%s\n", src);
    }
    else {
        int len = strlen (replacement);
        int i;
        for (i = 0; i < len; i++) {
            *p = replacement[i];
            p++;
        }
        printf ("%s\n", src);
    }
    return 0;
}

