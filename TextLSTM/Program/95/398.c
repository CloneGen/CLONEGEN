int main () {
    char a [2] [80], b [2] [80], c;
    int i, j;
    for (i = 0; i < 2; i++) {
        gets (a [i]);
    }
    for (j = 0; (c = a[0][j]) != '\0'; j++) {
        if (c >= 'A' && c <= 'Z') {
            b[0][j] = c + 32;
        }
        else {
            b[0][j] = c;
        }
    }
    b[0][j] = '\0';
    for (j = 0; (c = a[1][j]) != '\0'; j++) {
        if (c >= 'A' && c <= 'Z') {
            b[1][j] = c + 32;
        }
        else {
            b[1][j] = c;
        }
    }
    b[1][j] = '\0';
    if (strcmp (b[0], b[1]) > 0) {
        printf (">");
    }
    else if (strcmp (b[0], b[1]) < 0) {
        printf ("<");
    }
    else if (strcmp (b[0], b[1]) == 0) {
        printf ("=");
    }
    return 0;
}

