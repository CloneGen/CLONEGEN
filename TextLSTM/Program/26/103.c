int main () {
    char str [111];
    int length = 0, j = 0;
    char *p = NULL;
    cin.getline (str, 111);
    length = strlen (str);
    p = str;
    for (int i = 0;
    i < length; i++) {
        str[i] = *p;
        if (*p == ' ') {
            if (*(p - 1) == ' ') {
                while (*p == ' ') {
                    p++;
                }
                i--;
                continue;
            }
            else {
                p++;
            }
        }
        else {
            p++;
        }
    }
    printf ("%s", str);
    return 0;
}

