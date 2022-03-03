int main () {
    int i, n, suffixLen;
    char word [32], *p;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", word);
        for (p = word; *p; p++)
            ;
        switch (*(p - 1)) {
        case 'r' :
            suffixLen = 2;
            break;
        case 'y' :
            suffixLen = 2;
            break;
        case 'g' :
            suffixLen = 3;
            break;
        }
        *(p - suffixLen) = '\0';
        printf ("%s\n", word);
    }
    return 0;
}

