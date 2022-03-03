int main () {
    char line [1000] = {0};
    char longestWord [100] = {0};
    char shortestWord [100] = {0};
    char *tokenPtr;
    int maxLength = 0;
    int minLength = 10000;
    int currentLength = 0;
    int i = 0;
    char c;
    c = getchar ();
    while (c != '\n') {
        line[i] = c;
        i++;
        c = getchar ();
    }
    line[i] = 0;
    if (strlen (line) == 0)
        return 0;
    tokenPtr = strtok (line, " ");
    while (tokenPtr != NULL) {
        currentLength = strlen (tokenPtr);
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy (longestWord, tokenPtr);
        }
        if (currentLength < minLength) {
            minLength = currentLength;
            strcpy (shortestWord, tokenPtr);
        }
        tokenPtr = strtok (NULL, " ");
    }
    printf ("%s\n", longestWord);
    printf ("%s\n", shortestWord);
    return 0;
}

